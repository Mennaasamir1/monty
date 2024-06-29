#include "monty.h"
/**
 * stream_closed - the function closes the stream
*/
void stream_closed(void)
{
	if (ptr->show == NULL)
	{
		return;
	}
	fclose(ptr->show);
	ptr->show = NULL;
}
