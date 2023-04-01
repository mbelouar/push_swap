#include "push_swap.h"

char    **ft_stock_args(t_stack *stack, int ac, char **av)
{
    int     i;
    char    *linked_str;
    char    **stock_str;

    i = 1;
    stack->size = 0;
    linked_str = (char *)malloc(sizeof(char) * 1);
    while (i < ac)
    {
        if (!is_empty(av[i]))
        {
            write(2, "Error\n", 6);
            free(linked_str);
            exit (EXIT_FAILURE);
        }
        linked_str = ft_strjoin(linked_str, av[i]);
        linked_str = ft_strjoin(linked_str, " ");
        i++;
    }
    stock_str = ft_split(linked_str, ' ');
    i = 0;
    while (stock_str[i])
    {
        stack->size++;
        i++;
    }
    free(linked_str);
    return (stock_str);
}
