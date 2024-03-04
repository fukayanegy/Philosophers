/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:32:03 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/04 15:06:40 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/philosophers.h"

int	error_code1(void)
{
	return (1);
}

int	main(int argc, char **argv)
{
	t_data	*data;
	t_philo	*philo;
	int		i;

	if (argc != 5 && argc != 6)
	{
		error_code1();
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (!ft_isdigit(argv[i]))
		{
			error_code1();
			return (1);
		}
		i++;
	}
	data = init_data(argc, argv);
	philo = init_philo(0);
	philo->status = EATING;
	print_log(philo);

	printf("input datas are %d %d %d %d %d\n",
			data->number_of_philosophers,
			data->time_to_die,
			data->time_to_eat,
			data->time_to_sleep,
			data->number_of_times_each_philosopher_must_eat);

	free(data);
	free(philo);
	return (0);
}
