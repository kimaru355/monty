#include "monty.h"

/**
* addnode - function that adds node to the head stack
* @head: head of the stack
* @n: new value
* Return: nothing
*/

void addnode(stack_t **head, int n)
{
	stack_t *new_nodes, *temps;

	temps = *head;
	new_nodes = malloc(sizeof(stack_t));
	if (new_nodes == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temps)
		temps->prev = new_nodes;
	new_nodes->n = n;
	new_nodes->next = *head;
	new_nodes->prev = NULL;
	*head = new_nodes;
}

