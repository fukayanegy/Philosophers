/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_log.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:48:32 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/26 12:59:29 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

/*
 * timestamp_in_ms X has taken a fork
 * timestamp_in_ms X is eating
 * timestamp_in_ms X is sleeping
 * timestamp_in_ms X is thinking
 * timestamp_in_ms X died
 * */

static int	print_philo(t_philo *philo)
{
	if (philo == NULL)
		return (1);
	printf("%d ", philo->id);
	if (philo->status == EATING)
	{
		printf("is eating\n");
	}
	else if (philo->status == SLEEPING)
	{
		printf("is sleeping\n");
	}
	else if (philo->status == THINKING)
	{
		printf("is thinking\n");
	}
	else if (philo->status == DIED)
	{
		printf("died\n");
	}
	return (0);
}

int	print_log(t_philo *philo)
{
	struct timeval	time1;

	gettimeofday(&time1, NULL);
	printf("%d ", (int)time1.tv_sec);
	print_philo(philo);
	return (0);
}
