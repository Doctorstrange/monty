#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @line_no: line_counter
* @file: poiner to monty file
* @r_line: line content
* Return: no return
*/
int play(char *r_line, stack_t **stack, unsigned int line_no, FILE *file)
{
	instruction_t argid[] = {
				{"push", t_push},
				{"pall", t_pall},
				{"pint", t_pint},
				{"pop", t_pop},
				{"swap", t_swap},
				{NULL, NULL}
				};

	unsigned int i = 0;
	char *str;

	str = strtok(r_line, " \n\t");
	if (str && str[0] == '#')
		return (0);
	move.arg = strtok(NULL, " \n\t");
	while (argid[i].opcode != NULL && str != NULL)
	{
		if (strcmp(str, argid[i].opcode) == 0)
		{	argid[i].f(stack, line_no);
			return (0);
		}
		i++;
	}
	if (str && argid[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_no, str);
		fclose(file);
		free(r_line);
		free_buffer(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
