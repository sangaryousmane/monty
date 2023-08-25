#include "main.h"

/**
 * _mod - computes modulus on the second top of the stack
 * @head: the stack head
 * @c: line_number
 * Return: nothing
*/
void _mod(stack_t **head, unsigned int c)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", c);
		free_them(head);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", c);
		free_them(head);
	}
	swapper = temp->next->n % temp->n;
	temp->next->n = swapper;
	*head = temp->next;
	free(temp);
}
