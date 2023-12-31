#include "monty.h"
/**
 * f_pint - prints the top
 * @head: stack head
 * @line_no: line_number
 * Return: no return
*/
void t_pint(stack_t **head, unsigned int line_no)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_no);
		fclose(move.file);
		free_buffer(*head);
		free(move.r_line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
