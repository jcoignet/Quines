# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoignet <jcoignet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/22 19:56:29 by jcoignet          #+#    #+#              #
#    Updated: 2016/03/23 19:32:46 by jcoignet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
RS = rustc
CFLAGS = -Wall -Wextra -Werror
SRC = Grace.c
RSSRC = Grace.rs
OBJ = Grace.o
NAME = Grace
RSNAME = GraceRust

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

rust: $(RSNAME)

$(RSNAME): $(RSSRC)
	$(RS) -o $(RSNAME) $(RSSRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(RSNAME)
	rm -f Grace_kid.c Grace_kid.rs

re: fclean all

.PHONY: all re clean fclean rust