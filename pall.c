#include "monty.h"

/**
 * f_pall - prints the elements of the stack.
 * @head: stack head
 * @counter: line number (unused)
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void)counter;

	current = *head;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
