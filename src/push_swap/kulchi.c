/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kulchi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:28:54 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/07 22:31:30 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	kulchi(t_stack *stack)
{
	if (stack->size_a == 3)
		sort_3(stack);
	else if (stack->size_a == 4 || stack->size_a == 5)
		sort_4_and_5(stack);
	else if (stack->size_a <= 100)
	{
		ft_sort_array(stack);
		push_from_a_to_b(stack, 19);
		push_from_b_to_a(stack);
	}
	else if (stack->size_a > 100 && stack->size_a <= 500)
	{
		ft_sort_array(stack);
		push_from_a_to_b(stack, 35);
		push_from_b_to_a(stack);
	}
}
