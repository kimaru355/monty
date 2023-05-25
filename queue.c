#include "monty.h"

/**
* f_queue - function that prints the top of the queue
* @head: head of queue
* @counter: line count
* Return: nothing
*/

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
* addqueue - function that add node to the tail the queue
* @n: new value
* @head: head of the queue
* Return: nothing
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_nodes, *temps;

	temps = *head;
	new_nodes = malloc(sizeof(stack_t));
	if (new_nodes == NULL)
	{
		printf("Error\n");
	}
	new_nodes->n = n;
	new_nodes->next = NULL;
	if (temps)
	{
		while (temps->next)
			temps = temps->next;
	}
	if (!temps)
	{
		*head = new_nodes;
		new_nodes->prev = NULL;
	}
	else
	{
		temps->next = new_nodes;
		new_nodes->prev = temps;
	}
}

