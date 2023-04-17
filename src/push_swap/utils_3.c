/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:10:14 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/17 22:02:29 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_print_px(char a_or_b, int check_value)
{
	if (check_value == 1 && a_or_b == 'a')
		write (1, "pa\n", 3);
	else if (check_value == 1 && a_or_b == 'b')
		write(1, "pb\n", 3);
}

void	ft_free_atoi(char **str, int *ptr)
{
	ft_free(str);
	free(ptr);
	ft_error();
}

void	ft_check_empty_after_sign(char c, char **str, int *ptr)
{
	if (c == '\0')
		ft_free_atoi(str, ptr);
}

void	ft_check_digit(char c, char **str, int *ptr)
{
	if (!is_digit(c))
		ft_free_atoi(str, ptr);
}
