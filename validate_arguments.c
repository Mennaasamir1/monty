#include "monty.h"

/**
 * argument_validation - this functions checks argument validation
 * @argc: argument number
*/
void argument_validation(int argc)
{
	if (argc == 2)
	{
		return;
	}
	else
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
