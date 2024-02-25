/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_log.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:48:32 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/25 20:53:05 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

int	print_log(void)
{
	struct timeval	time1;

	gettimeofday(&time1, NULL);
	printf("%d", (int)time1.tv_sec);
	return (0);
}
