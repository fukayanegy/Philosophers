# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 17:28:22 by etakaham          #+#    #+#              #
#    Updated: 2024/02/23 17:31:23 by etakaham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= philo
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SANITIZE	= -fsanitize=address -g
RE			= rm -f
MAIN		= srcs/main.c

all:$(NAME)

$(NAME):$(MAIN)
	@$(CC) $(CFLAGS) $^ -o $@

clean:

fclean:clean
	@$(RE) $(NAME)

re:fclean all
