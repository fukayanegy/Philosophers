/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:16:09 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/04 14:29:20 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct s_philo
{
	int				id;
	int				status;
	bool			l_hand;
	bool			r_hand;
	pthread_t		thread;
	struct t_philo	*l_philo;
	struct t_philo	*r_philo;
}					t_philo;

typedef struct s_data
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;
}		t_data;

#endif
