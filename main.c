#include <stdio.h>
#include "monty.h"
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *r_line;
	FILE *file;
	size_t size = 0;
	ssize_t file_read = 0;
	stack_t *stack = NULL;
	unsigned int line_no = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	move.file = file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (file_read > 0)
	{
		r_line = NULL;
		file_read = getline(&r_line, &size, file);
		move.r_line = r_line;
		line_no++;
		if (file_read > 0)
		{
			play(r_line, &stack, line_no, file);
		}
		free(r_line);
	}
	free_buffer(stack);
	fclose(file);
return (0);
}
