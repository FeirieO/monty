#include "monty.h"

/**
 * f2_mod - Computes the remainder of the division of the second
 *          top element of the stack by the top element of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return
 */
void f2_mod(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	(*head)->next->n %= (*head)->n;
	pop(head);
}
