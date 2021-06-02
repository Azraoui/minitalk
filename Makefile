# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 13:02:48 by ael-azra          #+#    #+#              #
#    Updated: 2021/06/02 15:29:29 by ael-azra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = server
NAME2 = client

# flag = -Wall -Wextra -Werror

server_src = ./files/server.c \

client_src = ./files/client.c \

all: $(NAME1) $(NAME2)

$(NAME1):
		gcc $(flag) $(server_src) -o $(NAME1)

$(NAME2):
		gcc $(flag) $(client_src) -o $(NAME2)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME1) $(NAME2)

re: fclean all

.PHONY: all clean fclean re