#include "monty.h"
/**
 * print_char - prints the char at the peek of the stack
 * @stack: st
 * @line_number: line num
 */
void print_char(stack_t **stack, unsigned int line_number)
{
	stack_t *alt;

	(void) stack;

	if (ptr->top == NULL)
	{
		dprintf(2, "L%d: can't pchar, value out of range\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}
	alt = ptr->top;

	if (alt->n < 0 || alt->n > 127)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		all_arguments_free();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", alt->n);
}
