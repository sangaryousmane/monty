#include "monty.h"

/**
 * _add_node - add node to the stack's head
 * @head: the stack's head
 * @n: the value
 * Return: nothing
*/
void _add_node(stack_t **head, int n)
{

	stack_t *new_node = malloc(sizeof(stack_t)), *swapper = *head;

	if (!new_node)
	{
		printf("Error\n");
		exit(0);
	}
	if (swapper != NULL)
		swapper->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
