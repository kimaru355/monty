#include "monty.h"

/**
* f_push - function that adds node to the stack
* @head: double head pointer to the stack
* @counter: line count
* Return: nothing
*/

void f_push(stack_t **head, unsigned int counter)
{
	int j, n = 0, flags = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			n++;
		for (; bus.arg[n] != '\0'; n++)
		{
			if (bus.arg[n] > 57 || bus.arg[n] < 48)
				flags = 1; }
		if (flags == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	j = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, j);
	else
		addqueue(head, j);
}
