/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:42:09 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/18 18:41:47 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_stack_and_line_and_str(t_stack *stack, char *line, char **str)
{
	write(2, "Error\n", 6);
	free(stack->a);
	free(stack->b);
	ft_free(str);
	free(line);
	exit (1);
}

void	free_stack_and_str(t_stack *stack, char **str)
{
	free(stack->a);
	free(stack->b);
	ft_free(str);
}

void	ft_check(t_stack *stack)
{
	if (is_sorted(stack) == 1 && !stack->size_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
