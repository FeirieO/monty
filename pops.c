#include "monty.h"

/**
 * f_pops - removes the top element of the stack.
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void f_pops(stack_t **head, unsigned int counter)
{
    stack_t *top;

    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    top = *head;
    *head = top->next;
    free(top);
}
