/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:32:03 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/23 18:12:18 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/philosophers.h"

int	main(int argc, char **argv)
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	i;

	if (argc != 5 && argc != 6)
	{
		printf("hoge\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (!ft_isdigit(argv[i]))
		{
			printf("neko\n");
			return (1);
		}
		i++;
	}
	number_of_philosophers = ft_atoi(argv[1]);
	time_to_die = ft_atoi(argv[2]);
	time_to_eat = ft_atoi(argv[3]);
	time_to_sleep = ft_atoi(argv[4]);
	return (0);
}
