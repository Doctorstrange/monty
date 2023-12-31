#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;




/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



typedef struct move_it
{
	FILE *file;
	char *r_line;
	int que;
	char *arg;
}  move_t;

extern move_t move;



void t_push(stack_t **head, unsigned int line_no);

void t_pall(stack_t **head, unsigned int line_no);

void free_buffer(stack_t *head);

int play(char *r_line, stack_t **stack, unsigned int line_no, FILE *file);

void *add_dnodeint(stack_t **head, int n);

void t_pint(stack_t **head, unsigned int line_no);

void t_pop(stack_t **head, unsigned int line_no);

void t_swap(stack_t **head, unsigned int line_no);

void t_add(stack_t **head, unsigned int line_no);

void t_nop(stack_t **head, unsigned int line_no);

#endif
