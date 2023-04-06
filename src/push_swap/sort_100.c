/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 01:18:40 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/06 22:35:29 by mbelouar         ###   ########.fr       */
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

void    sort_100(t_stack *stack)
{
    int i;
    int range;

    i = 0;
    int len = stack->size_a;
    range = 15;
    while (i < len)
    {
        range += i;
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

void    solve_a(t_stack *stack, int range, int i)
{
    while (stack->size_a)
    {
        if (stack->a[0] < i)
        {
            pb(stack, 1);
            rb(stack, 1);
            ++i;
        }
        else if (stack->a[0] < range + i)
        {
            pb(stack, 1);
            ++i;
        }
        else
            ra(stack, 1);
    }
}
int    get_index(int *stack, int size, int n);

void    solve_b(t_stack *stack)
{
    while (stack->size_b)
    {
        if (get_index(stack->b, stack->size_b, stack->size_b
                - 1) < stack->size_b / 2)
            while (get_index(stack->b, stack->size_b, stack->size_b - 1))
                rb(stack, 1);
        else
            while (get_index(stack->b, stack->size_b, stack->size_b - 1))
                rrb(stack, 1);
        pa(stack, 1);
    }
}

int    get_index(int *stack, int size, int n)
{
    int    i;

    i = -1;
    while (++i < size)
    {
        if (stack[i] == n)
            return (i);
    }
    return (-1);
}