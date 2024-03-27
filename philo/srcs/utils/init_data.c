/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:30:11 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/16 19:34:51y etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

static int	get_data_memory(t_data *data)
{
	data->thread = ft_calloc(sizeof(pthread_t), data->number_of_philosophers);
	data->philos = ft_calloc(sizeof(t_philo), data->number_of_philosophers);
	data->forks = ft_calloc(sizeof(pthread_mutex_t), data->number_of_philosophers);
	if (data->thread == NULL || data->philos == NULL || data->forks == NULL)
		return (1);
	return (0);
}

static int	init_forks(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->number_of_philosophers)
	{
		pthread_mutex_init(&data->forks[i], NULL);
		i++;
	}
	i = 0;
	while (i < data->number_of_philosophers)
	{
		data->philos[i].r_fork = &data->forks[i - 1];
		data->philos[i].l_fork = &data->forks[i - 1];
		i++;
	}
	return (0);
}

static int	init_philos(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->number_of_philosophers)
	{
		data->philos[i].data = data;
		data->philos[i].id = i + 1;
		data->philos[i].eat_cont = 0;
		data->philos[i].status = 0;
		data->philos[i].eating = 0;
		pthread_mutex_init(&data->philos[i].lock, NULL);
		i++;
	}
	return (0);
}

static int	init_data_support(t_data *data, int argc, char **argv)
{
	data->number_of_philosophers = ft_atoi(argv[1]);
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		data->number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);
	else
		data->number_of_times_each_philosopher_must_eat = -1;
	record_start_time(data);
	data->dead = 0;
	data->finished = 0;
	data->eating_count = 0;
	pthread_mutex_init(&data->write, NULL);
	pthread_mutex_init(&data->lock, NULL);
	return (0);
}

int	init_data(t_data *data, int argc, char **argv)
{
	init_data_support(data, argc, argv);
	get_data_memory(data);
	init_forks(data);
	init_philos(data);
	return (0);
}
