# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbeauman <tbeauman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/04 13:16:56 by tbeauman          #+#    #+#              #
#    Updated: 2017/04/12 20:53:31 by tbeauman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = ./src/
OBJ_PATH = ./obj/

CC = gcc
CFLGS = -Werror -Wextra -Wall

NAME = DrQuine
SRC_NAME = Colleen.c Grace.c Sully.c

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

.PHONY: re all clean fclean nolib norme

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLGS) -o Colleen src/Colleen.c
	$(CC) $(CFLGS) -o Grace src/Grace.c
	$(CC) $(CFLGS) -o Sully src/Sully.c

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLGS) $(INC) -o $@ -c $<

nolib: $(OBJ)
	$(CC) $(CFLGS) -lft -lftprintf $(INC) $(OBJ) -o $(NAME)

clean:
	rm -fv $(OBJ)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -fv Colleen Grace Sully
	rm -rf Sully_*

re: fclean all

norme:
	make -C $(LIB_PATH) norme
	norminette $(SRC) ./include/
