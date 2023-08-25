#include "monty.h"
/**
 * t_pop - prints the top
 * @head: head
 * @line_no: line_number
 * Return: no return
*/
void t_pop(stack_t **head, unsigned int line_no)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_no);
		fclose(move.file);
		free(move.r_line);
		free_buffer(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
