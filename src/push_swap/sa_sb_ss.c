#include "push_swap.h"

void    sa(t_stack   *stack)
{
    int x;
    int y;

    if (stack->size_a < 2)
        exit(1);
    x = stack->a[stack->size_a - 1];
    y = stack->a[stack->size_a];
    stack->a[stack->size_a - 1] = y;
    stack->a[stack->size_a] = x;
}