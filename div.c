#include "monty.h"

/**
 * f2_div - Divides the top two elements of the stack.
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void f2_div(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n /= (*head)->n;
	pop(head);
}
