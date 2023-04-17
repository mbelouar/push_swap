# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelouar <mbelouar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 01:33:52 by mbelouar          #+#    #+#              #
#    Updated: 2023/04/17 18:10:57 by mbelouar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/push_swap/final_stack_a.c \
			src/push_swap/ft_check_args.c \
			src/push_swap/all.c \
			src/push_swap/push_swap.c \
			src/push_swap/ra_rb_rr_pa_pb.c \
			src/push_swap/rra_rrb_rrr.c \
			src/push_swap/sa_sb_ss.c \
			src/push_swap/sort_4_and_5.c \
			src/push_swap/sort_big_numbers.c \
			src/push_swap/utils_1.c \
			src/push_swap/utils_2.c \
			src/push_swap/utils_3.c \
			src/push_swap/ft_rev_sort.c \

SRC_BONUS 	= src/checker/ft_check_instructions.c \
			src/checker/main.c \
			src/checker/gnl/get_next_line.c \
			src/checker/gnl/get_next_line_utils.c \
			src/push_swap/utils_1.c \
			src/push_swap/utils_2.c \
			src/push_swap/utils_3.c \
			src/push_swap/ra_rb_rr_pa_pb.c \
			src/push_swap/rra_rrb_rrr.c \
			src/push_swap/sa_sb_ss.c \
			src/push_swap/ft_check_args.c \
			src/push_swap/ft_rev_sort.c \
			src/checker/utils_bonus.c \

NAME		= push_swap
NAME_BONUS 	= checker
CC			= cc
CFLAGS 		= -Wall -Werror -Wextra -I includes
RM 			= rm -f

OBJS_BONUS := $(SRC_BONUS:.c=.o)
 
all:		$(NAME)

$(NAME):	$(SRCS) 
			$(CC) $(CFLAGS)  $(SRCS) -o $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS):		$(OBJS_BONUS)
			$(CC) $(CFLAGS)  $(OBJS_BONUS) -o $(NAME_BONUS)

clean: 
			@$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			@$(RM) $(NAME) $(NAME_BONUS)

re:			fclean all bonus

.PHONY:		all clean fclean re bonus