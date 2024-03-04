# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 17:28:22 by etakaham          #+#    #+#              #
#    Updated: 2024/03/04 14:55:09 by etakaham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= philo
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SANITIZE	= -fsanitize=address -g
RE			= rm -f
MAIN		= srcs/main.c
TEST		= srcs/test.c
SRCS		= srcs/utils/ft_atoi.c srcs/utils/ft_isdigit.c srcs/utils/print_log.c srcs/utils/init_philo.c srcs/utils/init_data.c
OBJS		= $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(MAIN) $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

test:$(TEST) $(OBJS)
	$(CC) $(SANITIZE) $^ -o $@

clean:
	$(RE) $(OBJS)

fclean:clean
	$(RE) $(NAME) test

re:fclean all
