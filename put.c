#include "monty.h"
/**
 * put - the function pushes data to the stack
 * @stack: double pointer to the stack
 * @line_number: number of the line
 */
void put(stack_t **stack, unsigned int line_number)
{
	if (ptr->num_pieces <= 1 || !(IsNum(ptr->pieces[1])))
	{
		args_free();
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		printf("error");
		fail_malloc();
	}
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(ptr->pieces[1]);

	if (ptr->top != NULL)
	{
		(*stack)->next = ptr->top;
		ptr->top->prev = *stack;
	}
	ptr->top = *stack;
	ptr->len_stack += 1;
}
