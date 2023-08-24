#include "monty.h"
/**
 * pushing - push and print all
 * @head: stack head
 * @value: line_number
 * Return: no return
*/

void t_push(stack_t **head, unsigned int line_no)
{

	stack_t *new_place;

	new_place = (stack_t *)malloc(sizeof(stack_t));

	if (new_place == NULL)
	{
		printf("Memory error\n");
		exit(EXIT_FAILURE);
	}
	new_place->n = line_no;
	new_place->next = *head;
	new_place->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_place;
	}
	*head = new_place;
}

void t_pall(stack_t **head, unsigned int line_no)
{
	stack_t *top;
	(void)line_no;
	top = *head;

	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
