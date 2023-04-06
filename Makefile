# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 01:33:52 by mbelouar          #+#    #+#              #
#    Updated: 2023/04/04 01:16:35 by mbelouar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 
OBJS	= ${SRCS:.c=.o}
NAME	= push_swap
AR		= ar -r
CC		= gcc
CFLAGS = -Wall -Werror -Wextra
RM 		= rm -f

all:	${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}