#include "monty.h"
/**
 * print_all - the function prints the data of stack to stdout
 * @stack: stack
 * @line_number: num of the line where the instruction
 */
void print_all(stack_t **stack, unsigned int line_number)
{
	stack_t *alt = ptr->top;

	if (ptr->top == NULL)
	{
		return;
	}

	(void) stack;
	(void) line_number;

	while (alt != NULL)
	{
		printf("%d\n", alt->n);
		alt = alt->next;
	}


}
