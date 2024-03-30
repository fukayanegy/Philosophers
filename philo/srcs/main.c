/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:32:03 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/24 16:04:15 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/philosophers.h"

int	main(int argc, char **argv)
{
	t_data data;

	init_data(&data, argc, argv);
	activate_thread(&data);
	return (0);
}
