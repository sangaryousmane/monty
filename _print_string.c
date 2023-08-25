#include "main.h"

/**
 * _print_string - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @c: line_number
 * Return: no return
*/
void _print_string(stack_t **head, unsigned int c)
{
	stack_t *temp = *head;
	(void)c;

	while (temp != NULL)
	{
		if (temp->n > 127 || temp->n <= 0)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
