#include "monty.h"

/**
* f_add - function that adds the top two elements of the stack
* @head: double pointer head to the stack
* @counter: line count
* Return: nothing
*/

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *ha;
	int length = 0, temp;

	ha = *head;
	while (ha)
	{
		ha = ha->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ha = *head;
	temp = ha->n + ha->next->n;
	ha->next->n = temp;
	*head = ha->next;
	free(ha);
}

/**
* f_sub - function that substracts nodes
* @head: double head pointer to the stack
* @counter: line count
* Return: nothing
*/

void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int sub, nod;

	temp = *head;
	for (nod = 0; temp != NULL; nod++)
		temp = temp->next;
	if (nod < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	*head = temp->next;
	free(temp);
}

/**
* f_mul - function that multiplies the top two elements of the stack
* @head: double head pointer to the stack
* @counter: line count
* Return: nothing
*/

void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *ha;
	int length = 0, temp;

	ha = *head;
	while (ha)
	{
		ha = ha->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ha = *head;
	temp = ha->next->n * ha->n;
	ha->next->n = temp;
	*head = ha->next;
	free(ha);
}

/**
* f_div - function that divides the top two elements of the stack
* @head: double head pointer to the stack
* @counter: line count
* Return: nothing
*/

void f_div(stack_t **head, unsigned int counter)
{
	stack_t *ha;
	int length = 0, temp;

	ha = *head;
	while (ha)
	{
		ha = ha->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	ha = *head;
	if (ha->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = ha->next->n / ha->n;
	ha->next->n = temp;
	*head = ha->next;
	free(ha);
}

/**
* f_mod - function that computes the remainder of the division of the second
* top element of the stack by the top element of the stack
* @head: double head pointer to the stack
* @counter: line count
* Return: nothing
*/

void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *ha;
	int length = 0, temp;

	ha = *head;
	while (ha)
	{
		ha = ha->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ha = *head;
	if (ha->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = ha->next->n % ha->n;
	ha->next->n = temp;
	*head = ha->next;
	free(ha);
}
