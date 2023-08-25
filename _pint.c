#include "main.h"

/**
 * _pint - prints the value at the top of the stack, followed by a new line.
 * @head: the stack's head
 * @c: the line number
 * Return: nothing
*/
void _pint(stack_t **head, unsigned int c)
{
	if (!*head)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", c);
		free_them(head);
	}
	printf("%d\n", (*head)->n);
}
