/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:32:03 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/23 17:48:36 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/philosophers.h"

int	main(void)
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;

	number_of_philosophers = 5;
	time_to_die = ft_atoi("8");
	time_to_eat = ft_atoi("80");
	time_to_sleep = ft_atoi("18");

	printf("start. %d %d %d\n", time_to_die, time_to_eat, time_to_sleep);
	return (0);
}