#include "monty.h"

/**
 * f_queue - Switches to queue mode (enables queue behavior).
 * @head: Stack head (unused)
 * @counter: Line number (unused)
 * Return: No return
 */
void f_queue(stack_t **head, unsigned int counter)
{
    (void)head;
    (void)counter;

    bus.lifi = 1;
}
