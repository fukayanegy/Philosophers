/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:40:05 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/25 21:43:19 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

t_philo	*init_philo(int	id)
{
	t_philo	*philo;

	philo = malloc(sizeof(philo));
	if (philo == NULL)
		exit(0);
	philo->id = id;
	return (philo);
}
