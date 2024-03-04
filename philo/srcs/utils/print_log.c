/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_log.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:48:32 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/26 13:37:38 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

static int	print_philo(t_philo *philo)
{
	if (philo == NULL)
		return (1);
	printf("%d ", philo->id);
	if (philo->status == HAS_TAKEN)
	{
		printf("has taken a fork\n");
	}
	else if (philo->status == EATING)
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
