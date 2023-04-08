/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:42:09 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/08 23:43:07 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	free_all(t_stack *stack, char *line)
{
	write(2, "Error\n", 6);
	free(stack->a);
	free(stack->b);
	free(line);
	exit (1);
}
