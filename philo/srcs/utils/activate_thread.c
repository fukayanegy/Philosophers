/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   activate_thread.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:21:55 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/27 17:01:33 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

static void	*management(void *data_pointer)
{
	t_philo	*philo;

	philo = (t_philo *)data_pointer;
	pthread_mutex_lock(&philo->data->write);
	pthread_mutex_unlock(&philo->data->write);
	while (philo->data->dead == 0)
	{
		pthread_mutex_lock(&philo->lock);
		if (philo->data->finished >= philo->data->number_of_philosophers)
		{
			philo->data->dead = 1;
		}
		pthread_mutex_unlock(&philo->lock);
	}
	return (NULL);
}

/*
static void	*supervisor(void *data_pointer)
{
	t_philo	*philo;

	philo = (t_philo *)data_pointer;
	return (NULL);
}
*/

static void	*action(void *data_pointer)
{
	t_philo	*philo;

	philo = (t_philo *)data_pointer;
	printf("==========id:%d\n==========", philo->id);
	printf("\n");
	return ((void *)0);
}

int	activate_thread(t_data *data)
{
	int	i;
	pthread_t	waiter;

	if (data->number_of_times_each_philosopher_must_eat > 0)
	{
		pthread_create(&waiter, NULL, &management, &data->philos[0]);
	}
	i = 0;
	while (i < data->number_of_philosophers)
	{
		pthread_create(&data->thread, NULL, &action, &data->philos[i]);
		usleep(1);
		i++;
	}
	return (0);
}
