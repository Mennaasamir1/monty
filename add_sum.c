#include "monty.h"
/**
 * to_add - the function sums up (adds) the top 2 elems
 * @stack: stack
 * @line_number: line num
 */
void to_add(stack_t **stack, unsigned int line_number)
{
	stack_t *alt1, *alt2;
	(void) stack;

	if (ptr->len_stack < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}

	alt1 = ptr->top;
	alt2 = alt1->next;

	alt2->n = alt1->n + alt2->n;
	pop_node();
	ptr->len_stack -= 1;
}
