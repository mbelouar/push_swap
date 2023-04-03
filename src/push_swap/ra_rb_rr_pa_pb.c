#include "push_swap.h"

void    ra(t_stack  *stack, int check)
{
    int top;
    int i;

    i = 1;
    top = stack->a[0];
    while (i < stack->size_a)
    {
        stack->a[i - 1] = stack->a[i];
        i++;
    }
    stack->a[stack->size_a - 1] = top;
    if (check == 1)
        write(1, "ra\n", 3);
}

void    rb(t_stack  *stack, int check)
{
    int top;
    int i;

    i = 1;
    top = stack->b[0];
    while (i < stack->size_b)
    {
        stack->b[i - 1] = stack->b[i];
        i++;
    }
    stack->b[stack->size_b - 1] = top;
    if (check == 1)
        write(1, "ra\n", 3);
}

void    rr(t_stack *stack, int check)
{
    ra(stack, 0);
    rb(stack, 0);
    if (check == 1)
        write(1, "rr\n", 3);
}

void    pa(t_stack *stack, int check)
{
    int i;
    int top;

    if (stack->b)
    {
        i = 0;
        top = stack->b[0];
        while (i < stack->size_b)
        {
            stack->b[i] = stack->b[i + 1];
            i++;
        }
        stack->size_b--;
        stack->size_a++;
        i++;
        while (i >= 0)
        {
            stack->a[i] = stack->a[i - 1];
            i--;
        }
        stack->a[0] = top;
        if (check == 1)
            write(1, "pa\n", 3);
    }
}

void    pb(t_stack *stack, int check)
{
    int i;
    int top;

    if (stack->a)
    {
        i = 0;
        top = stack->a[0];
        while (i < stack->size_a)
        {
            stack->a[i] = stack->a[i + 1];
            i++;
        }
        stack->size_a--;
        stack->size_b++;
        i++;
        while (i >= 0)
        {
            stack->b[i] = stack->b[i - 1];
            i--;
        }
        stack->b[0] = top;
        if (check == 1)
            write(1, "pb\n", 3);
    }
}