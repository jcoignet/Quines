# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcoignet <jcoignet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/22 19:56:29 by jcoignet          #+#    #+#              #
#    Updated: 2016/03/22 20:13:15 by jcoignet         ###   ########.fr        #
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

.PHONY: all re clean fclean