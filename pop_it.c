#include "monty.h"
/**
 * delete_it - deletes the top stack node "element".
 * @stack: stack
 * @line_number: line number
 */
void delete_it(stack_t **stack, unsigned int line_number)
{
	(void) stack;

	if (ptr->top == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}
	pop_node();
	ptr->len_stack -= 1;
}
