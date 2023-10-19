#include "monty.h"

/**
 * f_push - adds a node to the stack with an integer value.
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void f_push(stack_t **head, unsigned int counter)
{
    int n;

    if (!bus.arg)
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    for (int j = 0; bus.arg[j] != '\0'; j++)
    {
        if (bus.arg[j] < '0' || bus.arg[j] > '9')
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            fclose(bus.file);
            free(bus.content);
            free_stack(*head);
            exit(EXIT_FAILURE);
        }
    }

    n = atoi(bus.arg);
    
    if (bus.lifi == 0)
        addnode(head, n);
    else
        addqueue(head, n);
}
