/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:16:09 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/20 18:25:01 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

struct	s_data;

typedef struct s_philo
{
	struct s_data	*data;
	pthread_t		thread;
	int				id;
	int				eat_cont;
	int				status;
	int				eating;
	pthread_mutex_t	lock;
	pthread_mutex_t	*r_fork;
	pthread_mutex_t	*l_fork;
}					t_philo;

typedef struct s_data
{
	pthread_t		thread;
	int				number_of_philosophers;
	int				dead;
	int				finished;

	unsigned int	time_to_die;
	unsigned int	time_to_eat;
	unsigned int	time_to_sleep;
	int				number_of_times_each_philosopher_must_eat;

	unsigned int	start_time;
	unsigned int	eating_count;

	t_philo			*philos;
	pthread_mutex_t	*forks;
	pthread_mutex_t	lock;
	pthread_mutex_t	write;
}		t_data;
#endif
