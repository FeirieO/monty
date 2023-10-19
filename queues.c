#include "monty.h"

/**
 * f_queue - Switches to queue mode.
 * @head: Stack head
 * @counter: Line number
 * Return: No return
 */
void f_queue(stack_t **head, unsigned int counter)
{
    (void)head;
    (void)counter;

    bus.lifi = 1;
}

/**
 * add_queue - adds a node to the tail of the stack (queue behavior).
 * @head: pointer to the head of the stack
 * @n: new value
 * Return: no return
 */
void add_queue(stack_t **head, int n)
{
    stack_t *new_node, *tail;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
    }
    else
    {
        tail = *head;
        while (tail->next)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->prev = tail;
    }
}
