/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:02:44 by mbelouar          #+#    #+#             */
/*   Updated: 2023/03/07 00:16:40 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int i;
    char    **dest;

    i = 0;
    dest = ft_stock_args(ac, av);
    while (i < ac)
    {
        printf("%s\n", dest);
        i++;
    }
}
