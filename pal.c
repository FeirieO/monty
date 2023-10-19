i#include "monty.h"

/**
 * f_pal - prints the elements of the stack.
 * @head: stack head
 * @counter: line number (unused)
 * Return: no return
 */
void f_pal(stack_t **head, unsigned int counter)
{
	stack_t *current;
	(void)counter;
	
	current = *head;
	while(current)
	{
		printf("%d\n", current->n);
		current = current->next;
    	}
}
