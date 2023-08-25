#include "monty.h"


/**
 * div_top_two - divides the top two elements of the stack.
 * @head: the stack's head
 * @keep: line number
 * Return: nothing
*/
void div_top_two(stack_t **head, unsigned int keep)
{
	stack_t *temp = *head;
	int size = 0, swapper;

	while (temp)
	{
		temp = temp->next;
		size++;
	}
	if (size < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", keep);
		free_them(head);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", keep);
		free_them(head);
	}
	swapper = temp->next->n / temp->n;
	temp->next->n = swapper;
	*head = temp->next;
	free(temp);
}
