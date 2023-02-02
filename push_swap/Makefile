# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbordona <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 17:25:18 by lbordona          #+#    #+#              #
#    Updated: 2023/02/02 11:17:02 by lbordona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT = ./libft/libft.a

NAME = push_swap

SRCS = srcs/push_swap.c \
		srcs/swap_operations.c \
		srcs/push_operations.c \
		srcs/rotate_operations.c \
		srcs/rerotate_operations.c \
		srcs/sort_operations_1.c \
		srcs/sort_operations_2.c \
		srcs/sort_utils.c

OBJS = $(SRCS:%.c=%.o)

#Rules:
all: $(NAME)
$(LIBFT):
	@$(MAKE) -C ./libft

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o push_swap

clean:
	@$(MAKE) clean -C ./libft
	@$(RM) $(OBJS)

fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(RM) $(NAME)

re: fclean all
