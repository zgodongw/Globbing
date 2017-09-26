# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/22 12:27:30 by zgodongw          #+#    #+#              #
#    Updated: 2017/09/25 16:10:22 by zgodongw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = glob

SRCS = ./srcs/*.c ./minilib/*.c

INC = -I includes

CC = gcc

FLAGS = -Wall -Werror -Wextra -g -g3 -o

$(NAME): all

all:
	@$(CC) $(SRCS) -o $(NAME) $(INC)
	@mv $(NAME) ./test

clean:
	@rm ./test/glob

re: clean all
