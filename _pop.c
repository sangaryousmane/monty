#include "monty.h"


/**
 * _pop - prints the top of the stack
 * @head: the stack's head
 * @c: the number of lines
 * Return: nothing
*/
void _pop(stack_t **head, unsigned int c)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		free_them(head);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
