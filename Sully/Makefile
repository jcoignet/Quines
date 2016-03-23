# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoignet <jcoignet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/22 19:56:29 by jcoignet          #+#    #+#              #
#    Updated: 2016/03/23 17:54:28 by jcoignet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
RS = rustc
CFLAGS = -Wall -Wextra -Werror
SRC = Sully.c
RSSRC = Sully.rs
OBJ = Sully.o
NAME = Sully
RSNAME = SullyRust

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

re: fclean all

.PHONY: all re clean fclean rust