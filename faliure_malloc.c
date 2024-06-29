#include "monty.h"

/**
 * fail_malloc - handles memory allocation error
*/
void fail_malloc(void)
{
	dprintf(2, "Error: malloc failed\n");
	args_free();
	exit(EXIT_FAILURE);
}
