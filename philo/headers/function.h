/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:44:49 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/04 14:52:59 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include "./types.h"

/*utils*/
int		ft_atoi(const char *str);
bool	ft_isdigit(const char *str);
int		print_log(t_philo *philo);
t_philo	*init_philo(int	id);
t_data	*init_data(int argc, char **argv);

#endif
