# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoignet <jcoignet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/22 19:56:29 by jcoignet          #+#    #+#              #
#    Updated: 2016/03/22 22:05:49 by jcoignet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRS = Colleen \
	   Grace

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