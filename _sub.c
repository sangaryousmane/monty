#include "monty.h"

/**
  * _sub- substract
  * @head: stack head
  * @c: line_number
  * Return: nothing
 */
void _sub(stack_t **head, unsigned int c)
{
	int subs, i;
	stack_t *temp = *head;

	for (i = 0; temp != NULL; temp++)
		temp = temp->next;
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", c);
		free_them(head);
	}
	temp = *head;
	subs = temp->next->n - temp->n;
	temp->next->n = subs;
	*head = temp->next;
	free(temp);
}
