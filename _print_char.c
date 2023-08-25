#include "monty.h"

/**
 * _print_char - prints the char at the top of the stack
 * @head: stack head
 * @c: the line number
 * Return: no return
*/
void _print_char(stack_t **head, unsigned int c)
{
	stack_t *temp = *head;

	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", c);
		free_them(head);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", c);
		free_them(head);
	}
	printf("%c\n", temp->n);
}
