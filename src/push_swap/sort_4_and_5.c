#include "push_swap.h"

void    sort_4_and_5(t_stack *stack)
{
    int i;

    i = 0;
    if (is_sorted(&stack->a) == 0)
    {
        if (stack->size_a == 5)
        {
            // push the small number to the stack b
            i++;
        }
        if (stack->size_a == 4)
        {
            // push the small number to the stack b
            i++;
        }
        sort_3(&stack);
        while (i > 0)
        {
            // push what we have at the stack b to the stack a
            i--;
        }
    }
}