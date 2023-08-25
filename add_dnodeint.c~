#include "monty.h"

/**
 *add_dnodeint - print all elements on the list
 *@head: head pointer
 *@n: interger to be added
 *Return: address of the new element
 */

void *add_dnodeint(stack_t **head, const int n)
{
	stack_t *temphead;
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		return (NULL);
	}

	temphead = *head;

	new->prev = NULL;
	new->n = n;
	new->next = temphead;
	*head = new;

	if (temphead != NULL)
		temphead->prev = new;
	return (new);

}
