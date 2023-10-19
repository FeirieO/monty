#include "monty.h"

/**
 * f_sub - Subtracts the top element from the second element on the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return
 */
void f_sub(stack_t **head, unsigned int counter)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    int result = (*head)->next->n - (*head)->n;
    (*head)->next->n = result;
    pop(head);
}
