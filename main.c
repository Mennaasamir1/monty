#include "monty.h"
/**
 * main - starting of the program
 * @argc: argc number
 * @argv: vector
 * Return: 1 on success
 */

argt *ptr = NULL;
int main(int argc, char **argv)
{
	size_t v = 0;

	argument_validation(argc);
	argument_init();
	stream(argv[1]);

	while (getline(&ptr->line_of_text, &v, ptr->show) != -1)
	{
		ptr->line_number += 1;/*calcs the lines number*/
		line_into_tokens();/*break line to tokens*/
		handle_instruction();/*get the instruction + handle it*/
		command_run();/*run the function related to the instruction*/
		pieces_free();/*free tokens*/
	}
	stream_closed();
	args_free();
	return (0);
}
