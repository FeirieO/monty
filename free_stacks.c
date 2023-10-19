#include "monty.h"

/**
 * free_stacks - Frees a doubly linked list (stack).
 * @head: Pointer to the head of the stack
 */
void free_stacks(stack_t *head)
{
    stack_t *current, *next;

    current = head;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
