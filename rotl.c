#include "monty.h"

/**
* f_rotl- function that rotates the stack to the top
* @head: head of the stack
* @counter: line count
* Return: nothing
*/

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmps = *head, *auxs;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxs = (*head)->next;
	auxs->prev = NULL;
	while (tmps->next != NULL)
	{
		tmps = tmps->next;
	}
	tmps->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmps;
	(*head) = auxs;
}

