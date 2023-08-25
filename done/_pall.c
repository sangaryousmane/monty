#include "main.h"

/**
 * _pall - prints all the values on the stack, starting from the top
 * @head: head of the stack
 * @c: unused variable
 * Return: nothing
*/
void _pall(stack_t **head, unsigned int c)
{
	(void)c;
	stack_t *temp = head;

	if (temp == NULL)
		return;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
