# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoignet <jcoignet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/22 19:56:29 by jcoignet          #+#    #+#              #
#    Updated: 2016/03/23 19:42:23 by jcoignet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRS = Colleen \
	   Grace \
	   Sully

all:
	$(foreach d,$(DIRS),make -C $(d);)

clean:
	$(foreach d,$(DIRS),make -C $(d) clean;)

fclean:
	$(foreach d,$(DIRS),make -C $(d) fclean;)

re:
	$(foreach d,$(DIRS),make -C $(d) re;)

rust:
	$(foreach d,$(DIRS),make -C $(d) rust;)

.PHONY: all re clean fclean rust