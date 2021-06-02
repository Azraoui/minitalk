# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 13:02:48 by ael-azra          #+#    #+#              #
#    Updated: 2021/06/02 20:53:46 by ael-azra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = server
NAME2 = client

# flag = -Wall -Wextra -Werror

server_src = ./files/server/server.c ./src/libftt/libft.a\

client_src = ./files/client/client.c \
			./src/libftt/libft.a \
			./files/client/utiles.c \

all: $(NAME1) $(NAME2)

$(NAME1):
		make re -C ./src/libftt/
		gcc $(flag) $(server_src) -o $(NAME1)

$(NAME2):
		make re -C ./src/libftt/
		gcc $(flag) $(client_src) -o $(NAME2)

clean:
		make clean -C ./src/libftt/

fclean: clean
		make fclean -C ./src/libftt/
		rm -f $(NAME1) $(NAME2)

re: fclean all

.PHONY: all clean fclean re