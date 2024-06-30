#include "monty.h"
/**
 * to_swp - this function Implement the swap opcode
 * (the two elements in the stack).
 * @stack: stack
 * @line_number: line number
 */
void to_swp(stack_t **stack, unsigned int line_number)
{
	stack_t *alt1, *alt2;

	(void) stack;

	if (ptr->len_stack < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}
	alt1 = ptr->top;
	alt2 = alt1->next;
	alt1->next = alt2->next;

	if (alt1->next)
	{
		alt1->next->prev = alt1;
	}
	alt2->next = alt1;
	alt1->prev = alt2;
	alt2->prev = NULL;

	ptr->top = alt2;
}
