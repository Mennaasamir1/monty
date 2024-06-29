#include "monty.h"
/**
 * pop_node - handles the removal of the top element in stack
 */
void pop_node(void)
{
	stack_t *alt = ptr->top;

	ptr->top = alt->next;
	free(alt);
}
