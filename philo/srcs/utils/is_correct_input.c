/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_correct_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:53:50 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/24 17:36:04 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

bool	is_correct_input(int argc, char **argv)
{
	int	i;

	if (!(argc == 5 || argc == 6))
	{
		printf("hoge\n");
		return (false);
	}
	i = 0;
	while (i < argc)
	{
		if (!ft_isdigit(argv[i]))
		{
			ft_error(ARGS_ERROR);
			return (false);
		}
		i++;
	}
	return (true);
}
