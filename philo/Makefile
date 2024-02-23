# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 17:28:22 by etakaham          #+#    #+#              #
#    Updated: 2024/02/23 17:44:12 by etakaham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= philo
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SANITIZE	= -fsanitize=address -g
RE			= rm -f
MAIN		= srcs/main.c
SRCS		= srcs/utils/ft_atoi.c
OBJS		= $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(MAIN) $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@

clean:

fclean:clean
	@$(RE) $(NAME)

re:fclean all
