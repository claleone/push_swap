# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleone <cleone@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 15:17:57 by cleone            #+#    #+#              #
#    Updated: 2023/03/10 19:10:08 by cleone           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=		gcc
FLAGS	=		-Wall -Wextra -Werror

NAME	=		push_swap

FILES	=		main.c \
				utils.c \
				get_swap.c \
				right_swap.c \
				two_three_five_swap.c \
				sa_ra_rra_swap.c \
				stack_atoi.c \
				lis_swap.c \
				first_then_swap.c \
				start_swap.c \
				rev_swap.c \
				prof_swap.c \
				end_swap.c \
				arr.c \
				scroll_swap.c

OBJ		=		$(FILES:.c=.o)

LIBFT	=		libft/libft.a



all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C ./libft
	make clean -C ./libft

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@ $(LIBFT) 

%.o: %.c
	$(CC) $(FLAGS) -g -c $(FILES)

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)

re: fclean
	make 

n:
	@norminette

.PHONY: all clean fclean re n
