#include "monty.h"

/**
* f_pall - function that prints everything in the stack
* @head: double head pointer to the stack
* @counter: unused line count
* Return: nothing
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *ha;
	(void)counter;

	ha = *head;
	if (ha == NULL)
		return;
	while (ha)
	{
		printf("%d\n", ha->n);
		ha = ha->next;
	}
}

/**
* f_swap - function that swaps the top two elements of the stack
* @head: head of stack
* @counter: line count
* Return: nothing
*/

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *ha;
	int lengths = 0, temps;

	ha = *head;
	while (ha)
	{
		ha = ha->next;
		lengths++;
	}
	if (lengths < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ha = *head;
	temps = ha->n;
	ha->n = ha->next->n;
	ha->next->n = temps;
}
