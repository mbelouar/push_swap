/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:24:41 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/17 18:11:18 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_rev_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a - 1)
	{
		if (stack->a[i] < stack->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_rev_sort(t_stack *stack)
{
	while (stack->size_a)
		pb(stack, 1);
	while (stack->size_b)
	{
		pa(stack, 1);
		ra(stack, 1);
	}
}
