#include "monty.h"
/**
 * invalid_instruction - prints a message to the stdout if it's
 * an invalid instruction
*/
void invalid_instruction(void)
{
	dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", ptr->line_number, ptr->pieces[0]);
	all_arguments_free();
	exit(EXIT_FAILURE);
}
