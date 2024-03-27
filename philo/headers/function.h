/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:44:49 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/24 16:02:31 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include "./types.h"

/*utils*/
int		ft_atoi(const char *str);
bool	ft_isdigit(const char *str);
int		print_log(t_philo *philo);
int		ft_error(char *error_text);
t_philo	*init_philo(int	id);
int		record_start_time(t_data *data);
int		init_data(t_data *data, int argc, char **argv);
void	*ft_calloc(size_t nmemb, size_t size);
bool	is_correct_input(int argc, char **argv);
unsigned int	get_time(void);
int	activate_thread(t_data *data);

/*action*/
void	ft_sleeping(t_data *data);
void	ft_eating(t_data *data);

#endif
