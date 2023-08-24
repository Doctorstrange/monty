#include "monty.h"
/**
* free_buffer - frees linked list
* @head: head of the stack
*/
void free_buffer(stack_t *head)
{
	stack_t *header;

	header = head;
	while (head)
	{
		header = head->next;
		free(head);
		head = header;
	}
}
