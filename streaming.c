#include "monty.h"
/**
 * stream_fail - shows a message when stream fails
 * @file: filename
 */
void stream_fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file);
	args_free();
	exit(EXIT_FAILURE);
}
/**
 * stream - streams the output
 * @file: filename
*/
void stream(char *file)
{
	int descriptor;

	descriptor = open(file, O_RDONLY);
	if (descriptor == -1)
	{
		stream_fail(file);
	}
	ptr->show = fdopen(descriptor, "r");
	if (ptr->show == NULL)
	{
		close(descriptor);
		stream_fail(file);
	}
}
