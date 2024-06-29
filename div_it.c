#include "monty.h"
/**
 * to_divide - divides the 2 el by the 1 el
 * @stack: st
 * @line_number: line num
 */
void to_divide(stack_t **stack, unsigned int line_number)
{
	stack_t *alt1, *alt2;

	(void) stack;

	if (ptr->len_stack < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}

	alt1 = ptr->top;
	alt2 = alt1->next;

	if (alt1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}

	alt2->n = alt2->n / alt1->n;
	pop_node();

	ptr->len_stack -= 1;
}
