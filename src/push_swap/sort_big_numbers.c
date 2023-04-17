/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:18:40 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/15 20:29:25 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*put_stack_in_array(t_stack *stack)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * stack->size_a);
	while (i < stack->size_a)
	{
		tab[i] = stack->a[i];
		i++;
	}
	return (tab);
}

int	*ft_sort_array(t_stack *stack)
{
	int	i;
	int	tmp;
	int	*tab;

	i = 0;
	tab = put_stack_in_array(stack);
	while (i < stack->size_a - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab);
}

void	push_from_a_to_b(t_stack *stack, int *tab, int start, int end)
{
	int	top;

	while (stack->size_a)
	{
		top = stack->a[0];
		if (top <= tab[start])
		{
			pb(stack, 1);
			rb(stack, 1);
			start++;
			end++;
		}
		else if (top > tab[start] && top < tab[end])
		{
			pb(stack, 1);
			start++;
			end++;
		}
		else if (top >= tab[end])
			ra(stack, 1);
	}
}
