/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   record_start_time.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:22:22 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/27 16:22:23 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

int	record_start_time(t_data *data)
{
	data->start_time = get_time();
	return (0);
}
