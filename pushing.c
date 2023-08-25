#include "monty.h"
/**
 * pushing - push and print all
 * @head: stack head
 * @value: line_number
 * Return: no return
*/

void t_push(stack_t **head, unsigned int line_no)
#include "monty.h"
{
	int n, j = 0, flag = 0;

	if (move.arg)
	{
		if (move.arg[0] == '-')
			j++;
		for (; move.arg[j] != '\0'; j++)
		{
			if (move.arg[j] > 57 || move.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", line_no);
			fclose(move.file);
			free(move.r_line);
			free_buffer(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_no);
		fclose(move.file);
		free(move.r_line);
		free_buffer(*head);
		exit(EXIT_FAILURE); }
	n = atoi(move.arg);
	if (move.que == 0)
		add_dnodeint(head, n);
}

void t_pall(stack_t **head, unsigned int line_no)
{
	stack_t *h;
	(void)line_no;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
