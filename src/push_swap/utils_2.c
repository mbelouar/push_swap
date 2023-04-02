/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:33:12 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/02 03:20:08 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_atoi(char *s)
{
    int i = 0;
    int sign = 1;
    long  res = 0;

    while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
        i++;
    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (s[i])
    {
        if (!is_digit(s[i]))
            ft_error();
        res = res * 10 + s[i] - 48;
        i++;
    }   
    if ((sign == 1 && res > INT_MAX) || (sign == -1 && res > -INT_MIN))
        ft_error();
    return (res * sign);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void    ft_error(void)
{
    write(2, "Error\n", 6);
    exit(1);
}
