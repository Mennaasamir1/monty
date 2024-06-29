#include "monty.h"
/**
 * pieces_free - the function frees the memory for tokens
*/
void pieces_free(void)
{
	int j = 0;

	if (ptr->pieces == NULL)
	{
		return;
	}

	while (ptr->pieces[j])
	{
		free(ptr->pieces[j]);
		j++;
	}
	free(ptr->pieces);
	ptr->pieces = NULL;
}
