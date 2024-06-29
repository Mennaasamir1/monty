#include "monty.h"
/**
 * argument_init - used for argument intitialization
 */
void argument_init(void)
{
	ptr = malloc(sizeof(argt));

	if (ptr == NULL)
	{
		fail_malloc();
	}
	ptr->ins = malloc(sizeof(instruction_t));
	if (ptr->ins == NULL)
	{
		fail_malloc();
	}
	ptr->show = NULL;
	ptr->line_of_text = NULL;
	ptr->num_pieces = 0;
	ptr->line_number = 0;
	ptr->len_stack = 0;
	ptr->top = NULL;
}
