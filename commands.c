#include "monty.h"

/**
* _commands - executes the opcode
* @head: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int _commands(char *content, stack_t **head, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop}, {"swap", _swap},
				{"add", add_top}, {"nop", _nothing}, {"sub", _sub},
				{"div", div_top_two}, {"mul", mul_top_two},
				{"mod", _mod}, {"pchar", _print_char},
				{"pstr", _print_string}, {"rotl", _rotate_top},
				{"rotr", _rotate}, {"queue", _queue},
				{"stack", _stack}, {NULL, NULL}};
	unsigned int i = 0;
	char *op;
	(void)file;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	util.value = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(head, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		free_them(head);
	}
	return (1);
}
