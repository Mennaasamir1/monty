#include "monty.h"

argt *ptr = NULL;
/**
 * main - starting of the program
 * @argc: argc number
 * @argv: vector
 * Return: 1 on success
 */

int main(int argc, char **argv)
{
	size_t v = 0;

	argument_validation(argc);
	argument_init();
	stream(argv[1]);

	while (getline(&ptr->line_of_text, &v, ptr->show) != -1)
	{
		ptr->line_number += 1;
		line_into_tokens();
		handle_instruction();
		command_run();
		pieces_free();
	}
	stream_closed();
	args_free();
	return (0);
}
