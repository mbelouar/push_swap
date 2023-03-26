/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:41:33 by mbelouar          #+#    #+#             */
/*   Updated: 2023/02/23 00:58:00 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_is_empty(char *string)
{
    int i;

    i = 0;
    while (!(string[i] >= '0' && string[i] <= '9'))
    {
        if (string[i] == 32 && string[i + 1] != '\0')
            return (0);
        i++;
    }
    return (1);
}