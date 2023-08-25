#include "main.h"

/**
 * _queue - prints the top of the list
 * @head: the stack's head
 * @c: the line number
 * Return: nothing
*/
void _queue(stack_t **head, unsigned int c)
{
	(void)head;
	(void)c;
	util.flag_change = 1;
}


/**
 * _enqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void _enqueue(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t)), *swapper = *head;

	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (swapper)
	{
		while (swapper->next)
			swapper = swapper->next;
	}
	if (swapper == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		swapper->next = new_node;
		new_node->prev = swapper;
	}
}
