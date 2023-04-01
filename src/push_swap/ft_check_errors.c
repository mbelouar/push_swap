#include "push_swap.h"

int is_empty(char *str)
{
    int i;

    i = 0;
    while (!(str[i] >= '0' && str[i] <= '9'))
    {
        if (str[i] == '\0' || (str[i] == 32 && str[i + 1] == '\0'))
            return (0);
        i++;
    }
    return (1);
}

int is_digit(int c)
{
    return (c >= '0' && c <= '9');
}

void    check_doubles(t_stack *stack)
{
    int i = -1;
    int j;

    while (++i < stack->size)
    {
        j = i;
        while (++j < stack->size)
        {
            if (stack->a[i] == stack->a[j])
            {
                free(stack->a);
                ft_error();
            }
        }
    }
}