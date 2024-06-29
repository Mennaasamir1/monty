#include "monty.h"
/**
 * print_all - prints data
 * @stack: st
 * @line_number: line num
 */

void print_all(stack_t **stack, unsigned int line_number)
{
	stack_t *alt;

	(void) stack;
	(void) line_number;

	if (ptr->top == NULL)
	{
		return;
	}
	alt = ptr->top;

	while (alt != NULL)
	{
		printf("%d\n", alt->n);
		alt = alt->next;
	}
}
