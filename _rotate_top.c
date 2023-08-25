#include "monty.h"

/**
  *_rotate_top - rotates the stack to the top
  *@head: stack head
  *@c: the line number
  *Return: nothing
 */
void _rotate_top(stack_t **head,  unsigned int c)
{
	stack_t *temp, *swapper;
	(void)c;

        temp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	swapper = (*head)->next;
	swapper->prev = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = swapper;
}
