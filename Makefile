# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rohoarau <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/14 16:59:53 by rohoarau          #+#    #+#              #
#    Updated: 2022/02/14 17:59:54 by rohoarau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	push_swap
LIBFT 		= 	libft.a
LIB_DIR		=	libft/
OBJ_DIR		=	obj/
SRCS_DIR	=	src/
SRCS		=	main.c				\
				utils.c				\
				error_management.c	\
				operations_a.c		\
				operations_b.c		\
				operations_pb1.c	\
				operations_pa1.c	\
				algorithm_small.c	\
				algorithm_big.c		\
				algorithm_utils.c	\

OBJS = $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))

LFLAGS = -I include/
CFLAGS = -Wall -Wextra -Werror
DEBUGGING = -ggdb
CC = gcc
RM = rm -rf
AR = ar rc

all: $(NAME)

$(OBJ_DIR)%.o : $(SRCS_DIR)%.c
		@mkdir -p $(OBJ_DIR)
		$(CC) -c $(CFLAGS) $(DEBUGGING) $(LFLAGS) $< -o $@

$(NAME): $(OBJS)
		make -C $(LIB_DIR)

		$(CC) $(CFLAGS) $(OBJS) $(LFLAGS) $(LIB_DIR)$(LIBFT) -o $(NAME)
#		$(CC)$(CFLAGS) $(LFLAGS) $(LIB_DIR)$(LIBFT) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJ_DIR)
		$(RM) $(OBJS)
		make -C $(LIB_DIR) clean

fclean: clean
		$(RM) $(NAME)
		make -C $(LIB_DIR) fclean

re: fclean all

.PHONY: all clean re fclean
