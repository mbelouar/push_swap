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
    t_stack stack_a;
    t_stack stack_b;
    int     len;
    char    **str;

    if (!ac)
        return (0);
    str = ft_stock_args(&stack_a, ac, av);
    ft_fill_stack(str, &stack_a);
    return (0);
}
