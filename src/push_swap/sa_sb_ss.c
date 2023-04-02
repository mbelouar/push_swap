#include "push_swap.h"

void    sa(t_stack   *stack)
{
    int tmp;

    if (stack->size_a < 2)
        exit(1);
    tmp = stack->a[0];
    stack->a[0] = stack->a[1];
    stack->a[1] = tmp;
}

void    sb(t_stack   *stack)
{
    int tmp;

    if (stack->size_b < 2)
        exit(1);
    tmp = stack->b[0];
    stack->b[0] = stack->b[1];
    stack->b[1] = tmp;
}

void    ss(t_stack  *stack)
{
    if (stack->size_b < 2 || stack->size_a < 2)
        exit(1);
    sa(stack);
    sb(stack);
}