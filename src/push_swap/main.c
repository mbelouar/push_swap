#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack stack[1];
    char    **str;

    if (!ac)
        return (0);
    str = ft_stock_args(stack, ac, av);
    start(str, stack);
    return (0);
}