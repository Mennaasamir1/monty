#include "monty.h"
/**
 * to_rotate - rotates the stack
 * (first becomes last and second last becomes top)
 * @stack: st
 * @line_number: num line
 */
void to_rotate(stack_t **stack, unsigned int line_number)
{
	stack_t *alt1, *alt2;

	(void) line_number;
	(void) stack;

	if (ptr->len_stack < 2)
	{
		return;
	}

	alt1 = ptr->top;
	alt2 = alt1->next;
	ptr->top = alt2;

	while (alt2)
	{
		if (alt2->next == NULL)
		{
			alt2->next = alt1;
			alt1->next = NULL;
			alt1->prev = alt2;
			break;
		}
		alt2 = alt2->next;
	}
}
