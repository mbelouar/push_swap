/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 00:24:40 by mbelouar          #+#    #+#             */
/*   Updated: 2023/03/03 22:44:16 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char    **ft_stock_args(int ac, char **av)
{
    int     i;
    char    **stock_str;
    char    *linked_str;

    i = 1;
    linked_str = (char *)malloc(1);
    while (i < ac)
    {
        if (ft_is_empty(av[i]) == 0)
        {
            write(2, "Error\n", 6);
            free(linked_str);
            exit(EXIT_FAILURE)
        }
        linked_str = ft_strjoin(linked_str, av[i]);
        linked_str = ft_strjoin(linked_str, ' ');
        i++;
    }
    stock_str = ft_split(linked_str, ' ');
    free(linked_str);
    return(stock_str);
}
