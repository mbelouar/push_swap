#include "push_swap.h"

void    start(char **str, t_stack *stack)
{
    stack->a = (int *)malloc(sizeof(int) * stack->size);
    for (int i = 0; i < stack->size; i++)
        stack->a[i] = ft_atoi(str[i]);
    check_doubles(stack);
    // for (int i = 0; i < stack->size; i++)
    //    printf("%d\n", stack->a[i]);
}