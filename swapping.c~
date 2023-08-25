#include "monty.h"
/**
 * f_swap - adds the top two elements
 * @head: stack head
 * @line_no: line_number
 * Return: null return
*/
void t_swap(stack_t **head, unsigned int line_no)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_no);
		fclose(move.file);
		free_buffer(*head);
		free(move.r_line);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
