/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 01:52:46 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/18 18:42:07 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "push_swap.h"
# include "get_next_line.h"

int		ft_strcmp(char *s1, char *s2);
void	free_stack_and_line_and_str(t_stack *stack, char *line, char **str);
int		ft_check_instructions(t_stack *stack, char *line);
void	free_stack_and_str(t_stack *stack, char **str);
void	ft_check(t_stack *stack);
#endif
