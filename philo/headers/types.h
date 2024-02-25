/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 21:16:09 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/25 21:36:39 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct s_philo
{
	int				id;
	int				status;
	bool			l_hand;
	bool			r_hand;
	struct t_philo	*l_philo;
	struct t_philo	*r_philo;
}					t_philo;

#endif
