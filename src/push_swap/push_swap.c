/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:32:49 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/06 23:27:14 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack stack;
    char    **str;

    if (!ac)
        return (0);
    str = ft_stock_args(&stack, ac, av);
    ft_fill_stack(str, &stack);
    if (is_sorted(&stack) == 1)
       return (free(stack.a), 1);

    if (stack.size_a == 2)
        sa(&stack, 1);
    stack.b = (int *)malloc(sizeof(int) * stack.size_a);
    if (!stack.b)
        return (free(stack.a), 1);
    stack.size_b = 0;
    if (stack.size_a == 3)
        sort_3(&stack);
    else if (stack.size_a == 4 || stack.size_a == 5)
        sort_4_and_5(&stack);
    else if (stack.size_a <= 100)
    {
        ft_sort_array(&stack);
        solve_a(&stack, 19, 0);
        solve_b(&stack);
    }
    else if (stack.size_a > 100 && stack.size_a <= 500)
    {
        ft_sort_array(&stack);
        solve_a(&stack, 35, 0);
        solve_b(&stack);
    }
    return (0);
}
