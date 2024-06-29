#include "monty.h"
/**
 * args_free - frees all memory the arguments (ptr) pointer.
*/
void args_free(void)
{
	if (ptr == NULL)
	{
		return;
	}
	if (ptr->ins)
	{
		free(ptr->ins);
		ptr->ins = NULL;
	}
	head_is_free();

	if (ptr->line_of_text)
	{
		free(ptr->line_of_text);
		ptr->line_of_text = NULL;
	}
	free(ptr);
}
