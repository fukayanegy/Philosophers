/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:03:15 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/23 18:09:25 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

static bool	_isdigit(char c)
{
	return ('0' <= c && c <= '9');
}

bool	ft_isdigit(const char *str)
{
	while (*str != '\0')
	{
		if (!_isdigit(*str))
			return false;
		str++;
	}
	return true;
}
