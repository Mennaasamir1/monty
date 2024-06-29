#include "monty.h"
/**
 * command_run - the function runs the instructions
*/
void command_run(void)
{
	stack_t *stack = NULL;

	if (ptr->num_pieces == 0)
	{
		return;
	}

	ptr->ins->f(&stack, ptr->line_number);
}
