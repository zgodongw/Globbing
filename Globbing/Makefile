# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/22 12:27:30 by zgodongw          #+#    #+#              #
#    Updated: 2017/09/23 16:49:00 by zgodongw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = glob

SRCS = ./srcs/*.c

INC = -I includes

CC = gcc

FLAGS = -Wall -Werror -Wextra -o

$(NAME): all

all:
	@$(CC) $(SRCS) -o $(NAME) $(INC)
	@mv $(NAME) ./test

clean:
	@rm ./test/glob

re: clean all
