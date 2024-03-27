/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:22:11 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/27 16:22:12 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

unsigned int	get_time(void)
{
	struct timeval	time1;
	unsigned int	time;

	gettimeofday(&time1, NULL);
	time = (unsigned int)time1.tv_usec + ((unsigned int)time1.tv_sec % 1000) * 1000000;
	return (time);
}
