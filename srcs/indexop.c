#include "../inc/push_swap.h"

void    init_svalues(t_node *stack, int *values, int size)
{
    int    i;
    int    j;
    int    tmp;

    i = 0;
    while (i < size)
    {
        values[i++] = stack->value;
        stack = stack->next;
    }
    i = -1;
    while (++i < size - 1)
    {
        j = i + 1;
        while (j < size)
        {
            if (values[i] < values[j])
            {
                tmp = values[i];
                values[i] = values[j];
                values[j] = tmp;
            }
            j++;
        }
    }
}

void    indexoperations(t_node *stack, int ssize)
{
    int    *values;
    int    i;

    values = malloc(ssize * sizeof(int));
    i = 0;
    init_svalues(stack, values, ssize);
    while (stack)
    {
        i = 0;
        while (i < ssize)
        {
            if (stack->value == values[i] && stack->index == 0)
                    stack->index = ssize - i;
            i++;
        }
        stack = stack->next;
    }
    free(values);
}