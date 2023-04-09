/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:07:33 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/08 22:53:05 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_stack	stack;
	char	**str;
	char	*line;

	if (!ac || ac == 1)
		return (0);
	str = ft_stock_args(&stack, ac, av);
	ft_fill_stack(str, &stack);
	stack.b = (int *)malloc(sizeof(int) * stack.size_a);
	if (!stack.b)
		return (free(stack.a), 1);
	stack.size_b = 0;
	while (1)
	{
		line = get_next_line(0);
		if (line == NULL)
			break ;
		ft_check_instructions(&stack, line);
	}
	if (is_sorted(&stack) == 1 && stack.size_b == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
