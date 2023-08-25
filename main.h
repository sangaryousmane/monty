#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct utility - variables -args, file, line content
 * @value: the value
 * @monty_file: pointer to monty file
 * @line: line content
 * @flag_change: flag change stack and  queue
 * Description: handles the program's value
 */
typedef struct utility
{
	char *value;
	FILE *monty_file;
	char *line;
	int flag_change;
}  utils_t;

extern utils_t util;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void free_them(stack_t **head);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void _push(stack_t **head, unsigned int c);
void _pall(stack_t **head, unsigned int c);
void _pint(stack_t **head, unsigned int c);
int _commands(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void _pop(stack_t **head, unsigned int c);
void _swap(stack_t **head, unsigned int counter);
void add_top(stack_t **head, unsigned int counter);
void _nothing(stack_t **head, unsigned int c);
void _sub(stack_t **head, unsigned int c);
void div_top_two(stack_t **head, unsigned int keep);
void mul_top_two(stack_t **head, unsigned int c);
void _mod(stack_t **head, unsigned int c);
void _print_char(stack_t **head, unsigned int c);
void _print_string(stack_t **head, unsigned int c);
void _rotate_top(stack_t **head, unsigned int counter);
void _rotate(stack_t **head, __attribute__((unused)) unsigned int counter);
void _add_node(stack_t **head, int n);
void enqueue(stack_t **head, int n);
void _queue(stack_t **head, unsigned int c);
void _stack(stack_t **head, unsigned int counter);
#endif
