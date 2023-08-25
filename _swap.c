#include "monty.h"

/**
 * _swap - adds the stack's top two elements.
 * @head: stack head
 * @c: line_number
 * Return: nothing
*/
void _swap(stack_t **head, unsigned int c)
{
	stack_t *temp = *head;
	int length = 0, swapper;

	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", c);
		free_them(head);
	}
	temp = *head;
	swapper = temp->n;
	temp->n = temp->next->n;
	temp->next->n = swapper;
}
