#include "monty.h"
/**
 * to_flip - flips the task (last -> top, top -> last)
 * @stack: st
 * @line_number: line num
 */
void to_flip(stack_t **stack, unsigned int line_number)
{
	stack_t *alt, *last_one;

	(void) line_number;
	(void) stack;


	if (ptr->len_stack < 2)
	{
		return;
	}
	alt = ptr->top;

	while (alt)
	{
		if (alt->next == NULL)
		{
			last_one = alt;
			break;
		}
		alt = alt->next;
	}
	last_one->prev->next = NULL;
	last_one->next = ptr->top;
	last_one->prev = NULL;

	ptr->top = last_one;
}
