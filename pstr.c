#include "monty.h"
/**
 * print_str - prints the string at peek
 * @stack: stack
 * @line_number: line num
 */
void print_str(stack_t **stack, unsigned int line_number)
{
	stack_t *alt;

	(void) line_number;
	(void) stack;

	alt = ptr->top;
	while (alt != NULL)
	{
		if (alt->n <= 0 || alt->n > 127)
		{
			break;
		}
		printf("%c", alt->n);
		alt = alt->next;
	}
	printf("\n");
}
