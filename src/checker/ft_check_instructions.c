/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_instructions.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:24:53 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/08 23:43:53 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_check_instructions(t_stack *stack, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		sa(stack, 0);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb(stack, 0);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss(stack, 0);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra(stack, 0);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb(stack, 0);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr(stack, 0);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa(stack, 0);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb(stack, 0);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra(stack, 0);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb(stack, 0);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr(stack, 0);
	else
		free_all(stack, line);
	free(line);
}
