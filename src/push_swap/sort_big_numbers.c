/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:18:40 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/07 20:54:22 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    *put_stack_in_array(t_stack *stack)
{
    int *tab;
    int i;
    
    i = 0;
    tab = (int *)malloc(sizeof(int) * stack->size_a);
    while (i < stack->size_a)
    {
        tab[i] = stack->a[i];
        i++;        
    }
    return (tab);
}

void    ft_fill_stack_with_sorted_index(t_stack *stack, int valeur, int index)
{
    int i;

    i = 0;
    while (i < stack->size_a)
    {
        if (stack->a[i] == valeur)
            stack->a[i] = index;
        i++;
    }
}

void    ft_sort_array(t_stack *stack)
{
    int i;
    int tmp;
    int *tab;

    i = 0;
    tab = put_stack_in_array(stack);
    while (i < stack->size_a - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = -1;
        }
        i++;
    }
    i = -1;
    while (++i < stack->size_a)
        ft_fill_stack_with_sorted_index(stack, tab[i], i);
    free(tab);
}

void    push_from_a_to_b(t_stack *stack, int range)
{
    int i;

    i = 0;
    while (stack->size_a)
    {
        if (stack->a[0] < i)
        {
            pb(stack ,1);
            rb(stack, 1);
            i++;
        }
        else if (stack->a[0] < range + i)
        {
            pb(stack, 1);
            i++;
        }
        else
            ra(stack, 1);
    } 
}
