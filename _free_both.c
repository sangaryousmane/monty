#include "monty.h"

/**
 * free_them - frees contents of the stack
 * @head: the stacks head
 * Return: nothing
 */
void free_them(stack_t **head)
{
	fclose(util.monty_file);
	free(util.line);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
