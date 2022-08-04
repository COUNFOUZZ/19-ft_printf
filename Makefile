# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabda <aabda@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 20:58:10 by aabda             #+#    #+#              #
#    Updated: 2022/08/04 11:20:31 by aabda            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
DIR		= srcs/
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs

SRCS = $(DIR)ft_printf.c $(DIR)ft_count_nbr.c \
	$(DIR)ft_is_char.c $(DIR)ft_is_hex.c \
	$(DIR)ft_is_int.c $(DIR)ft_is_percent.c \
	$(DIR)ft_is_pointer.c $(DIR)ft_is_string.c \
	$(DIR)ft_is_unsigned.c $(DIR)ft_putchar_fd.c \
	$(DIR)ft_putnbr_fd.c $(DIR)ft_putstr_fd.c \
	$(DIR)ft_search_tc.c $(DIR)ft_strlen.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(LIB) $@ $^

norm:
	norminette

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re norm