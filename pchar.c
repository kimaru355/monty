#include "monty.h"

/**
* f_pchar - function that prints the char
* at the top of the stack followed by a new line
* @head: stack head
* @counter: line count
* Return: nothing
*/

void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *ha;

	ha = *head;
	if (!ha)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (ha->n > 127 || ha->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ha->n);
}

