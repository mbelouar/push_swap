/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:07:44 by mbelouar          #+#    #+#             */
/*   Updated: 2023/04/08 22:28:16 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

void	*ft_calloc(size_t elementCount, size_t elementSize);
char	*get_next_line(int fd);
char	*ft_strchr(char *str, int c);
char	*ft__strjoin(char *s1, char *s2);
char	*ft_fill_rest(char *stock_arr, char *new_str, int i);
int		ft__strlen(char *str);

#endif
