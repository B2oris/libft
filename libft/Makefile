# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beborch <beborch@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 07:18:09 by beborch           #+#    #+#              #
#    Updated: 2017/11/22 01:59:44 by beborch          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isprint.c ft_memset.c ft_putstr.c ft_strdup.c ft_strlen.c \
	   ft_tolower.c ft_toupper.c ft_atoi.c ft_bzero.c ft_memcpy.c \
	   ft_memccpy.c ft_memchr.c ft_memcmp.c ft_strcpy.c ft_strncpy.c \
	   ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strcmp.c \
	   ft_strncmp.c ft_strstr.c ft_putchar.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr_fd.c \
	   ft_putendl.c ft_putendl_fd.c ft_strnstr.c ft_isalpha.c ft_striter.c \
	   ft_striteri.c ft_strclr.c ft_memalloc.c ft_isalpha.c ft_isdigit.c \
	   ft_isascii.c ft_isalnum.c ft_isprint.c ft_strnew.c ft_strdel.c \
	   ft_strtrim.c

OBJ = $(SRC:.c=.o)


all : $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
