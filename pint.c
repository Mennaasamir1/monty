#include "monty.h"
/**
 * peek - prints the top element in the stack
 * @stack: stack
 * @line_number: line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (ptr->top == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}
	(void) stack;
	printf("%d\n", ptr->top->n);
}
