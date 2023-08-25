#include "main.h"

/**
 * _push - pushes an element to the stack.
 * @head: stack head
 * @c: the number of line
 * Return: nothing
*/
void _push(stack_t **head, unsigned int c)
{
	int n, i = 0;
	int flag = 0;

	if (util.value)
	{
		if (util.value[0] == '-')
			i++;
		while (util.value[i] != '\0')
		{
			if (util.value[i] > 57 || util.value[i] < 48)
				flag = 1;
			i++;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", c);
			free_them(head);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", c);
		free_them(head);
	}
	n = atoi(util.value);
	if (util.flag_change == 0)
		_add_node(head, n);
	else
		enqueue(head, n);
}
