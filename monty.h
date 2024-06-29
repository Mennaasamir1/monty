#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE  200809L
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct arguments - has variables
 * @show: stream that connects to the stream file
 * @line_of_text: line to be read from file
 * @pieces: tokens in the file
 * @ins: instructions
 * @len_stack: length of the stack
 * @top: head pointer
 * @num_line: line
 * Description: stores variables that will be used throughout
 * the project.
*/
typedef struct arguments
{
	FILE *show;
	char *line_of_text;
	char **pieces;
	unsigned int line_number;
	instruction_t *ins;
	int num_pieces;
	stack_t *top;
	int len_stack;

} argt;
extern argt *ptr;

void argument_validation(int argc);
void fail_malloc(void);
void argument_init(void);
void stream_fail(char *file);
void stream(char *file);
void line_into_tokens(void);
void handle_instruction(void);
void pieces_free(void);
void instruction_incorrect(void);
void command_run(void);
void put(stack_t **stack, unsigned int line_number);

void delete_it(stack_t **stack, unsigned int line_number);
void print_all(stack_t **stack, unsigned int line_number);
void to_multi(stack_t **stack, unsigned int line_number);
void to_flip(stack_t **stack, unsigned int line_number);
void stk(stack_t **stack, unsigned int line_number);
void print_char(stack_t **stack, unsigned int line_number);
void to_modulus(stack_t **stack, unsigned int line_number);
void to_swp(stack_t **stack, unsigned int line_number);
void nothing_op(stack_t **stack, unsigned int line_number);

void to_add(stack_t **stack, unsigned int line_number);
void to_rotate(stack_t **stack, unsigned int line_number);
void to_q(stack_t **stack, unsigned int line_number);
void peek(stack_t **stack, unsigned int line_number);
void to_subtract(stack_t **stack, unsigned int line_number);
void to_divide(stack_t **stack, unsigned int line_number);
void print_str(stack_t **stack, unsigned int line_number);
int IsNum(char *s);

void stream_closed(void);
void args_free(void);
void head_is_free(void);
void stack_is_free(stack_t *top);
void all_arguments_free(void);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
FILE *fdopen(int fd, const char *mode);
void pop_node(void);


#endif
