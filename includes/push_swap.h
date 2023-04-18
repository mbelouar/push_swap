/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:31:45 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/18 18:12:35 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack	t_stack;

struct					s_stack
{
	int					*a;
	int					*b;
	int					size_a;
	int					size_b;
};

char					**ft_stock_args(t_stack *stack, int ac, char **av);
int						is_empty(char *str);
void					ft_error(void);
char					*ft_strjoin(char *s1, char *s2);
char					**ft_split(char const *s, char c);
char					*ft_substr(char const *s, unsigned int start,
							size_t len);
size_t					ft_strlen(const char *s);
void					ft_fill_stack(char **str, t_stack *stack);
int						is_digit(int c);
long					ft_atoi(char *s, char **arr, int *stack);
void					check_doubles(t_stack *stack, char **str);
int						is_sorted(t_stack *stack);
int						is_rev_sorted(t_stack *stack);
void					ft_rev_sort(t_stack *stack);
void					sa(t_stack *stack, int check);
void					sb(t_stack *stack, int check);
void					ss(t_stack *stack, int check);
void					ra(t_stack *stack, int check);
void					rb(t_stack *stack, int check);
void					rr(t_stack *stack, int check);
void					rra(t_stack *stack, int check);
void					rrb(t_stack *stack, int check);
void					rrr(t_stack *stack, int check);
void					pa(t_stack *stack, int check);
void					pb(t_stack *stack, int check);
void					sort_3(t_stack *stack);
void					sort_4_and_5(t_stack *stack);
int						small_index(t_stack *stack);
void					ft4_push_small_to_b(t_stack *stack, int index);
void					ft5_push_small_to_b(t_stack *stack, int index);
int						*ft_sort_array(t_stack *stack);
void					ft_fill_stack_with_sorted_index(t_stack *stack,
							int valeur, int index);
int						*put_stack_in_array(t_stack *stack);
void					push_from_a_to_b(t_stack *stack, int *tab,
							int start, int end);
void					push_from_b_to_a(t_stack *stack);
int						get_max_index(t_stack *stack);
void					all(t_stack *stack);
void					ft_free(char **arr);
void					ft_print_px(char a_or_b, int check_value);
void					ft_free_atoi(char **str, int *ptr);
void					atoi_init(int i, int sign, int res);
void					ft_atoi_value(int i, int sign, long res);
void					ft_check_empty_after_sign(char c, char **str, int *ptr);
void					ft_check_digit(char c, char **str, int *ptr);
void					free_all(t_stack *stack, char **str);
#endif
