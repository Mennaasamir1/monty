#include "monty.h"
/**
 * instruction_incorrect - prints a message to the stdout if it's
 * an invalid instruction
*/
void instruction_incorrect(void)
{
	dprintf(2, "L%d: unknown instruction %s\n", ptr->line_number, ptr->pieces[0]);
	all_arguments_free();
	exit(EXIT_FAILURE);
}
