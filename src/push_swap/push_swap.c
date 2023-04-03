/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:32:49 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/03 21:23:33 by mbelouar         ###   ########.fr       */
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
    if (stack.size_a == 4 || stack.size_a == 5)
        sort_4_and_5(&stack);
    // if (stack.size_a > 5 && stack.size_a <= 10)
    //     sort ten
    // if (stack.size_a > 10 && stack.size_a <= 100)
        //sort hundred
    
    // for (int i = 0; i < stack.size_a; i++)
    //     printf("stack->a[%d]\t", stack.a[i]);
    // printf("\n");
    // pb(&stack, 1);
    // pb(&stack, 1);
    // for (int i = 0; i < stack.size_a; i++)
    //     printf("stack->a[%d]\t", stack.a[i]);
    // printf("\n");
    
    // for (int i = 0; i < stack.size_b; i++)
    //     printf("stack->b[%d]\t", stack.b[i]);
    // Print the original stack
    // printf("Original stack: ");
    // for (int i = 0; i < stack.size_a; i++) {
    //     printf("%d ", stack.a[i]);
    // }
    // printf("\n");
    // printf("smallest index : %d\n", small_index(&stack));

    // // Call the sa function to swap the top two elements
    // pa(&stack, 1);

    // // Print the updated stack
    // printf("Updated stack: ");
    // for (int i = 0; i < stack.size_a; i++) {
    //     printf("%d ", stack.a[i]);
    // }
    // printf("\n");

    return (0);
}
