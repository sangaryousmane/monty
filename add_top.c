#include "monty.h"

/**
 * add_top - adds the top two elements of the stack.
 * @head: stack head
 * @c: line_number
 * Return: nothing
*/
void add_top(stack_t **head, unsigned int c)
{
	stack_t *temp = *head;
	int length = 0, swapper;

	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", c);
		free_them(head);
	}
	temp = *head;
	swapper = temp->n + temp->next->n;
	temp->next->n = swapper;
	*head = temp->next;
	free(temp);
}
