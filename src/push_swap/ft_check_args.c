/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:32:35 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/18 18:22:49 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

int	is_empty(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '\0' || (str[i] == 32 && str[i + 1] == '\0'))
			return (0);
		i++;
	}
	return (1);
}

void	check_doubles(t_stack *stack, char **str)
{
	int	i;
	int	j;

	i = -1;
	while (++i < stack->size_a)
	{
		j = i;
		while (++j < stack->size_a)
		{
			if (stack->a[i] == stack->a[j])
			{
				free(stack->a);
				ft_free(str);
				ft_error();
			}
		}
	}
}

char	**ft_stock_args(t_stack *stack, int ac, char **av)
{
	int		i;
	char	*linked_str;
	char	**stock_str;

	i = 1;
	stack->size_a = 0;
	linked_str = (char *)malloc(1);
	while (i < ac)
	{
		if (!is_empty(av[i]))
		{
			write(2, "Error\n", 6);
			free(linked_str);
			exit(EXIT_FAILURE);
		}
		linked_str = ft_strjoin(linked_str, av[i]);
		linked_str = ft_strjoin(linked_str, " ");
		i++;
	}
	stock_str = ft_split(linked_str, ' ');
	i = -1;
	while (stock_str[++i])
		stack->size_a++;
	free(linked_str);
	return (stock_str);
}

void	ft_fill_stack(char **str, t_stack *stack)
{
	int	i;

	i = 0;
	stack->a = (int *)malloc(sizeof(int) * stack->size_a);
	if (!stack->a)
	{
		ft_free(str);
		write(2, "Allocation failed for stack a\n", 30);
		exit(1);
	}
	while (i < stack->size_a)
	{
		stack->a[i] = ft_atoi(str[i], str, stack->a);
		i++;
	}
	check_doubles(stack, str);
}
