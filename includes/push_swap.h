/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:31:45 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/05 16:47:14 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack  t_stack; 

struct s_stack
{
    int *a;
    int *b;
    int size_a;
    int size_b;
};

char    **ft_stock_args(t_stack *stack, int ac, char **av);
int     is_empty(char *str);
void    ft_error(void);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
void    ft_fill_stack(char **str, t_stack *stack);
int     is_digit(int c);
int     ft_atoi(char *s);
void    check_doubles(t_stack *stack);
int     is_sorted(t_stack *stack);
void    sa(t_stack *stack, int check);
void    sb(t_stack *stack, int check);
void    ss(t_stack *stack, int check);
void    ra(t_stack *stack, int check);
void    rb(t_stack *stack, int check);
void    rra(t_stack *stack, int check);
void    rrb(t_stack *stack, int check);
void    rrr(t_stack *stack, int check);
void    pa(t_stack *stack, int check);
void    pb(t_stack *stack, int check);
void    sort_3(t_stack *stack);
void    sort_4_and_5(t_stack *stack);
int     small_index(t_stack *stack);
void    ft4_push_small_to_b(t_stack *stack, int index);
void    ft5_push_small_to_b(t_stack *stack, int index);
void    ft_sort_array(t_stack *stack);
void    ft_fill_stack_with_sorted_index(t_stack *stack, int valeur, int index);
int    *put_stack_in_array(t_stack *stack);
void    sort_100(t_stack *stack);

#endif
