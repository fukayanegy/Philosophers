# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 17:28:22 by etakaham          #+#    #+#              #
#    Updated: 2024/03/27 16:24:13 by etakaham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= philo
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
SANITIZE	= -fsanitize=address -g
RE			= rm -f
MAIN		= srcs/main.c
SRCS		= srcs/utils/ft_atoi.c srcs/utils/ft_isdigit.c srcs/utils/print_log.c\
			  srcs/utils/init_philo.c srcs/utils/init_data.c srcs/action/ft_eating.c\
			  srcs/action/ft_sleeping.c srcs/utils/ft_calloc.c\
			  srcs/utils/record_start_time.c srcs/utils/ft_error.c\
			  srcs/utils/get_time.c srcs/utils/activate_thread.c\
			  srcs/utils/is_correct_input.c
OBJS		= $(SRCS:.c=.o)

all:$(NAME)

$(NAME):$(MAIN) $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RE) $(OBJS)

fclean:clean
	$(RE) $(NAME) test

re:fclean all
