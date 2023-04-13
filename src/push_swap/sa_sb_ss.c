/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:18:59 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/12 00:34:03 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack, int check)
{
	int	tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	if (check == 1)
		write(1, "sa\n", 3);
}

void	sb(t_stack *stack, int check)
{
	int	tmp;

	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	if (check == 1)
		write(1, "sb\n", 3);
}

void	ss(t_stack *stack, int check)
{
	sa(stack, 0);
	sb(stack, 0);
	if (check == 1)
		write(1, "ss\n", 3);
}
