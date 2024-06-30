#include "monty.h"
/**
 * put - the function pushes data to the stack
 * @stack: double pointer to the stack
 * @line_number: number of the line
 */
void put(stack_t **stack, unsigned int line_number)
{
	stack_t *alt;

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

	if (ptr->top == NULL)
		ptr->top = *stack;
	else
	{
		if (ptr->flag_it)
		{
			(*stack)->next = ptr->top;
			ptr->top->prev = *stack;
			ptr->top = *stack;
		}
		else
		{
			alt = ptr->top;
			while (alt->next)
			{
				alt = alt->next;
			}
			alt->next = *stack;
			(*stack)->prev = alt;
		}
	}
	ptr->len_stack += 1;
}
