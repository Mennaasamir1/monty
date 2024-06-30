#include "monty.h"
/**
 * invalid_instruction - prints a message to the stdout if it's
 * an invalid instruction
*/
void invalid_instruction(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", ptr->line_number, ptr->pieces[0]);
	all_arguments_free();
	exit(EXIT_FAILURE);
}
/**
 *  handle_instruction - the function sets the command/instruction based on
 *  the first token in the input line
 */
void handle_instruction(void)
{
	int j = 0;

	instruction_t commands[] = {
		{"push", &put}, {"pint", &pint},
		{"pall", &print_all}, {"pop", &delete_it},
		{"swap", &to_swp}, {"add", &to_add},
		{"sub", &to_subtract}, {"div", &to_divide},
		{"mul", &to_multi}, {"pstr", &print_str},
		{"pchar", &print_char}, {"mod", &to_modulus},
		{"nop", &nothing_op}, {NULL, NULL}
	};
	if (ptr->num_pieces == 0)
	{
		return;
	}
	if (ptr->pieces[0][0] == '#')
	{
		ptr->ins->opcode = "nop";
		ptr->ins->f = nothing_op;
		return;
	}
	for (; commands[j].opcode != NULL; j++)
	{
		if (strcmp(commands[j].opcode, ptr->pieces[0]) == 0)
		{
			ptr->ins->opcode = commands[j].opcode;
			ptr->ins->f = commands[j].f;
			return;
		}
	}
	invalid_instruction();
}
