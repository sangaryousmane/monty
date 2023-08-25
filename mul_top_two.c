#include "monty.h"

/**
 * mul_top_two - multiplies the stack's top two elements
 * @head: the stack's head
 * @c: the line number
 * Return: nothing
*/
void mul_top_two(stack_t **head, unsigned int c)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", c);
		free_them(head);
	}
	temp = *head;
	swapper = temp->next->n * temp->n;
	temp->next->n = swapper;
	*head = temp->next;
	free(temp);
}
