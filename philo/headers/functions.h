/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:06:10 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/12 18:10:53 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "./types.h"

//	utils
long		ft_atoi(const char *str);
int			error(char *str, t_data *data);
int			ft_strcmp(char *s1, char *s2);
void		messages(char *str, t_philo *philo);
void		ft_exit(t_data *data);

//	time
u_int64_t	get_time(void);
int			ft_usleep(useconds_t time);

//	init
int			init(t_data *data, char **argv, int argc);
int			thread_init(t_data *data);

//	checker
int			input_checker(char **argv);

//	actions
void		eat(t_philo *philo);

//	threads
void		*routine(void *philo_pointer);

#endif
