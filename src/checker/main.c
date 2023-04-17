/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 21:07:33 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/17 02:17:16 by mbelouar         ###   ########.fr       */
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
		if (ft_check_instructions(&stack, line))
			free_stack_and_line(&stack, line);
		free(line);
	}
	ft_check(&stack);
	free_stack_and_str(&stack, str);
	return (0);
}
