/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:32:49 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/02 03:41:59 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack stack;
    int     len;
    char    **str;

    if (!ac)
        return (0);
    str = ft_stock_args(&stack, ac, av);
    ft_fill_stack(str, &stack);
    if (is_sorted(&stack) == 1)
        write(1, "sorted\n", 7);
    if (stack.size_a == 2)
        // swap a or b
    if (stack.size_a == 3)
        // sort three
    if (stack.size_a == 4)
        // sort four
    if (stack.size_a == 5)
        // sort five
    if (stack.size_a > 5 && stack.size_a <= 10)
        // sort ten
    if (stack.size_a > 10 && stack.size_a <= 100)
        // sort hundred

    //if (stack_a.size_a == 2)
    

    // // Print the original stack
    // printf("Original stack: ");
    // for (int i = 0; i < stack_a.size_a; i++) {
    //     printf("%d ", stack_a.a[i]);
    // }
    // printf("\n");

    // // Call the sa function to swap the top two elements
    // sa(&stack_a);

    // // Print the updated stack
    // printf("Updated stack: ");
    // for (int i = 0; i < stack_a.size_a; i++) {
    //     printf("%d ", stack_a.a[i]);
    // }
    // printf("\n");

    return (0);
}
