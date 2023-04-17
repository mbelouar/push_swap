/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:32:49 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/16 22:45:07 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include<stdio.h>

int	main(int ac, char **av)
{
	t_stack	stack;
	char	**str;

	if (!ac)
		return (0);
	str = ft_stock_args(&stack, ac, av);
	ft_fill_stack(str, &stack);
	if (is_sorted(&stack) == 1)
		return (free(stack.a), ft_free(str), 1);
	if (stack.size_a == 2)
		sa(&stack, 1);
	stack.b = (int *)malloc(sizeof(int) * stack.size_a);
	if (!stack.b)
		return (free(stack.a), 1);
	stack.size_b = 0;
	if (is_rev_sorted(&stack) == 1)
	{
		ft_rev_sort(&stack);
		return (0);
	}
	all(&stack);
	ft_free(str);
	free(stack.a);
	free(stack.b);
	return (0);
}
