#include "monty.h"
#include <stdio.h>

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t _line = 1;
	stack_t *lifo = NULL;
	unsigned int c = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	util.monty_file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (_line > 0)
	{
		content = NULL;
		_line = getline(&content, &size, file);
		util.line = content;
		c++;
		if (_line > 0)
		{
			_commands(content, &lifo, c, file);
		}
		free(content);
	}
	free_stack(lifo);
	fclose(file);
	return (0);
}
