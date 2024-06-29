#include "monty.h"
/**
 * all_arguments_free - the function frees the memory of the arguments.
 */
void all_arguments_free(void)
{
	stream_closed();
	pieces_free();
	args_free();
}
