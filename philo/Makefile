# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 17:28:22 by etakaham          #+#    #+#              #
#    Updated: 2024/02/23 17:50:53 by etakaham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= philo
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SANITIZE	= -fsanitize=address -g
RE			= rm -f
MAIN		= srcs/main.c
SRCS		= srcs/utils/actions.c srcs/utils/init.c srcs/utils/threads.c srcs/utils/utils.c
OBJS		= $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(MAIN) $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@

clean:
	@$(RE) $(OBJS)

fclean:clean
	@$(RE) $(NAME)

re:fclean all
