# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 17:36:10 by ael-azra          #+#    #+#              #
#    Updated: 2021/04/22 13:56:22 by ael-azra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	  ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c \
	  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
	  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strcmp.c

OBJECT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) -Wall -Wextra -Werror
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all
