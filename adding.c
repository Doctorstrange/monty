#include "monty.h"
/**
 * t_add - adds the top two elements of the stack.
 * @head: stack head
 * @line_no: line_number
 * Return: no return
*/
void t_add(stack_t **head, unsigned int line_no)
{
	stack_t *x;
	int len = 0, temp;

	x = *head;
	while (x)
	{
		x = x->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_no);
		fclose(move.file);
		free_buffer(*head);
		free(move.r_line);
		exit(EXIT_FAILURE);
	}


	x = *head;
	temp = x->n + x->next->n;
	x->next->n = temp;
	*head = x->next;

	free(x);
}
