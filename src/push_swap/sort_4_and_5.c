/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_and_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:18:49 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/14 01:54:32 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	small_index(t_stack *stack)
{
	int	i;
	int	index;
	int	small_value;

	index = 0;
	i = 1;
	small_value = stack->a[0];
	while (i < stack->size_a)
	{
		if (stack->a[i] < small_value)
		{
			small_value = stack->a[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	ft5_push_small_to_b(t_stack *stack, int index)
{
	if (index == 1)
		sa(stack, 1);
	else if (index == 2)
	{
		ra(stack, 1);
		ra(stack, 1);
	}
	else if (index == 3)
	{
		rra(stack, 1);
		rra(stack, 1);
	}
	else if (index == 4)
		rra(stack, 1);
	pb(stack, 1);
}

void	ft4_push_small_to_b(t_stack *stack, int index)
{
	if (index == 1)
		sa(stack, 1);
	else if (index == 2)
	{
		rra(stack, 1);
		rra(stack, 1);
	}
	else if (index == 3)
		rra(stack, 1);
	pb(stack, 1);
}

void	sort_4_and_5(t_stack *stack)
{
	int	index;

	index = 0;
	if (is_sorted(stack) == 0)
	{
		if (stack->size_a == 5)
		{
			index = small_index(stack);
			ft5_push_small_to_b(stack, index);
		}
		if (stack->size_a == 4)
		{
			index = small_index(stack);
			ft4_push_small_to_b(stack, index);
		}
		sort_3(stack);
		while (stack->size_b)
			pa(stack, 1);
	}
}
