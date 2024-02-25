# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 17:28:22 by etakaham          #+#    #+#              #
#    Updated: 2024/02/25 21:44:02 by etakaham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= philo
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SANITIZE	= -fsanitize=address -g
RE			= rm -f
MAIN		= srcs/main.c
SRCS		= srcs/utils/ft_atoi.c srcs/utils/ft_isdigit.c srcs/utils/print_log.c srcs/utils/init_philo.c
OBJS		= $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(MAIN) $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RE) $(OBJS)

fclean:clean
	$(RE) $(NAME)

re:fclean all
