#include "monty.h"
/**
 * to_multi - the function multiplies the first 2 els
 * @stack: stack
 * @line_number: line num
 */
void to_multi(stack_t **stack, unsigned int line_number)
{
	stack_t *alt1, *alt2;

	(void) stack;

	if (ptr->len_stack < 2)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}

	alt1 = ptr->top;
	alt2 = alt1->next;

	alt2->n = alt2->n * alt1->n;
	pop_node();
	ptr->len_stack -= 1;
}
