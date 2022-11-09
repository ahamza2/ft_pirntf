# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 11:26:58 by haarab            #+#    #+#              #
#    Updated: 2022/11/06 12:27:19 by haarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

FILES =	ft_putstr.c \
		ft_putnbr.c \
		ft_printf.c \
		ft_putchar.c \
		ft_conv.c \
		ft_hexadl.c \
		ft_hexadu.c \
		ft_unsigned_d.c
	
OBJS = ft_putstr.o \
		ft_putnbr.o \
		ft_printf.o \
		ft_putchar.o \
		ft_conv.o \
		ft_hexadl.o \
		ft_hexadu.o \
		ft_unsigned_d.o

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^
	
clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
