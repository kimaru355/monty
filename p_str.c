#include "monty.h"

/**
* f_pstr - function that prints the string starting at the top of the stack,
* followed by a new
* @head: head of stack
* @counter: line count
* Return: nothing
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *ha;
	(void)counter;

	ha = *head;
	while (ha)
	{
		if (ha->n > 127 || ha->n <= 0)
		{
			break;
		}
		printf("%c", ha->n);
		ha = ha->next;
	}
	printf("\n");
}

