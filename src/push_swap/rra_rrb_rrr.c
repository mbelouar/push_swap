#include "push_swap.h"

void    rra(t_stack *stack, int check)
{
    int last_ele;
    int i;

    last_ele = stack->a[stack->size_a - 1];
    i = stack->size_a - 1;
    while (i > 0)
    {
        stack->a[i] = stack->a[i - 1];
        i--;
    }
    stack->a[0] = last_ele;
    if (check == 1)
        write(1, "rra\n", 4);
}

void    rrb(t_stack *stack, int check)
{
    int last_ele;
    int i;

    last_ele = stack->b[stack->size_b - 1];
    i = stack->size_b - 1;
    while (i > 0)
    {
        stack->b[i] = stack->b[i - 1];
        i--;
    }
    stack->b[0] = last_ele;
    if (check == 1)
        write(1, "rra\n", 4);
}

void    rrr(t_stack *stack, int check)
{
    rra(stack, 0);
    rrb(stack, 0);
    if (check == 1)
        write(1, "rrr\n", 3);
}