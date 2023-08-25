#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: stack's head
*/
void free_stack(stack_t *head)
{
	stack_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
