#include "monty.h"

/**
 * f2_add - Adds the top two elements of the stack.
 * @head: Pointer to the stack head
 * @counter: Line number
 * Return: No return
 */
void f2_add(stack_t **head, unsigned int counter)
{
    // Check if the stack is empty or has only one element
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    // Add the values of the top two elements
    (*head)->next->n += (*head)->n;

    // Remove the top element from the stack
    pop(head);
}
