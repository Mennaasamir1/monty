#include "monty.h"

/**
 * line_into_tokens - the function splits a line into tokens.
 */

void line_into_tokens(void)
{
	int n = 0;
	char *delimeter = " \n";
	char *piece = NULL;
	char *copy_line = NULL;

	copy_line = malloc(sizeof(char) * (strlen(ptr->line_of_text) + 1));
	strcpy(copy_line, ptr->line_of_text);
	ptr->num_pieces = 0;
	piece = strtok(copy_line, delimeter);
	while (piece)
	{
		ptr->num_pieces += 1;
		piece = strtok(NULL, delimeter);
	}

	ptr->pieces = malloc(sizeof(char *) * (ptr->num_pieces + 1));
	strcpy(copy_line, ptr->line_of_text);
	piece = strtok(copy_line, delimeter);
	while (piece)
	{
		ptr->pieces[n] = malloc(sizeof(char) *
				(strlen(piece) + 1));
		if (ptr->pieces[n] == NULL)
		{
			fail_malloc();
		}
		strcpy(ptr->pieces[n], piece);
		piece = strtok(NULL, delimeter);
		n++;
	}
	ptr->pieces[n] = NULL;
	free(copy_line);
}
