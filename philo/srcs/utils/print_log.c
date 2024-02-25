/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_log.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:48:32 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/25 21:46:38 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

static int	print_philo(t_philo *philo)
{
	if (philo == NULL)
		return (1);
	printf("%d\n", philo->id);
	return (0);
}

int	print_log(void)
{
	struct timeval	time1;
	t_philo			*philo;

	philo = init_philo(0);
	gettimeofday(&time1, NULL);
	print_philo(philo);
	printf("%d\n", (int)time1.tv_sec);
	return (0);
}
