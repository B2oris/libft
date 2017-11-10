# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beborch <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 07:18:09 by beborch           #+#    #+#              #
#    Updated: 2017/11/10 07:28:20 by beborch          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_isprint.c ft_memset.c ft_putstr.c ft_strdup.c ft_strlen.c \
	   ft_tolower.c ft_toupper.c
OBJ = ft_isprint.o ft_memset.o ft_putstr.o ft_strdup.o ft_strlen.o \
	  ft_tolower.o ft_toupper.o

all : libft.a

libft.a :
	gcc -Wall -Werror -Wextra -c $(NAME)
	ar rc libft.a $(OBJ)
	ranlib libft.a

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf libft.a

re : fclean all
