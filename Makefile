# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 14:34:11 by btenzlin          #+#    #+#              #
#   Updated: 2021/12/15 13:54:14 by                  ###   ########.fr       # #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

SRCS = server.c \
		client.c \

OBJS = server \
		client \

all: server.c client.c
	@cd libft2 && make
	@make server && make client

server: server.c
	@cd libft2 && make
	$(CC) $(FLAGS) server.c libft2/libft.a -o server

client: client.c
	@cd libft2 && make
	$(CC) $(FLAGS) client.c libft2/libft.a -o client

libft:
	@cd libft2 && make

clean:
	@cd libft2 && make clean
	$(RM) $(OBJS)

fclean:
	@cd libft2 && make fclean
	$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
