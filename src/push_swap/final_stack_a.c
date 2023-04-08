/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:06:17 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/07 22:06:18 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_index(t_stack *stack)
{
	int	i;
	int	index;
	int	biggest_value;

	index = 0;
	i = 1;
	biggest_value = stack->b[0];
	while (i < stack->size_b)
	{
		if (stack->b[i] > biggest_value)
		{
			biggest_value = stack->b[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	push_from_b_to_a(t_stack *stack)
{
	int	max_index;

	while (stack->size_b)
	{
		max_index = get_max_index(stack);
		if (max_index <= stack->size_b / 2)
			while (get_max_index(stack))
				rb(stack, 1);
		else
			while (get_max_index(stack))
				rrb(stack, 1);
		pa(stack, 1);
		max_index = get_max_index(stack);
	}
}
