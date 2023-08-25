#include "main.h"

/**
  *_rotate- rotates the stack to the bottom
  *@head: stack head
  *@c: line_number
  *Return: nothing
 */
void _rotate(stack_t **head, unsigned int c)
{
	stack_t *temp = *head;
	(void)c;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
