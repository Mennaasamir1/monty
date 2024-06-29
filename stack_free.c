#include "monty.h"
/**
 * stack_is_free - frees the memory of the stack
 * @top: (head) pointer of the stack (linked list)
 */
void stack_is_free(stack_t *top)
{
	if (top == NULL)
	{
		return;
	}

	if (top->next != NULL)
	{
		stack_is_free(top->next);
	}
	free(top);
}
