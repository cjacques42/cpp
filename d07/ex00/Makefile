# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjacques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/27 10:02:34 by cjacques          #+#    #+#              #
#    Updated: 2017/03/27 10:45:32 by cjacques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
CC = clang++
CFLAGS = -Wall -Werror -Wextra
OBJ_PATH = obj/
SHELL = /bin/bash

SRC_NAME =	whatever.cpp\

OBJ_NAME = $(SRC_NAME:.cpp=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	@echo -e "\033[32mCompile...\033[0m"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo -e "\033[32mDone\033[0m"

$(OBJ_PATH)%.o:%.cpp
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) -c $^ -o $@

clean:
	@echo -e "\033[32mClean\033[0m"
	@/bin/rm -rf $(OBJ_PATH)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
