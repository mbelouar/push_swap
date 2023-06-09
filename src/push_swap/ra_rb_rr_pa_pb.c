/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_pa_pb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:19:05 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/17 19:58:03 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack, int check)
{
	int	top;
	int	i;

	i = 1;
	top = stack->a[0];
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[stack->size_a - 1] = top;
	if (check == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack *stack, int check)
{
	int	top;
	int	i;

	i = 1;
	top = stack->b[0];
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[stack->size_b - 1] = top;
	if (check == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack *stack, int check)
{
	ra(stack, 0);
	rb(stack, 0);
	if (check == 1)
		write(1, "rr\n", 3);
}

void	pa(t_stack *stack, int check)
{
	int	i;

	if (stack->size_b == 0)
		return ;
	if (stack->size_a == 0)
		stack->a[0] = stack->b[0];
	else
	{
		i = stack->size_a;
		while (i)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = stack->b[0];
	}
	i = 0;
	while (i < stack->size_b)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->size_b--;
	stack->size_a++;
	ft_print_px('a', check);
}

void	pb(t_stack *stack, int check)
{
	int	i;

	if (stack->size_a == 0)
		return ;
	if (stack->size_b == 0)
		stack->b[0] = stack->a[0];
	else
	{
		i = stack->size_b;
		while (i)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = stack->a[0];
	}
	i = 0;
	while (i < stack->size_a)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->size_a--;
	stack->size_b++;
	ft_print_px('b', check);
}
