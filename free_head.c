#include "monty.h"
/**
 * head_is_free - frees the top (head) pointer of the linked list.
 */

void head_is_free(void)
{
	if (ptr->top)
	{
		stack_is_free(ptr->top);
	}
	ptr->top = NULL;
}
