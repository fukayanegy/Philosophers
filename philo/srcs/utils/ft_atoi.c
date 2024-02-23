/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:36:11 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/23 17:40:59 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

static int	ft_check(char str_i, bool minus_sign, long ans)
{
	if (ans == LONG_MAX / 10 && minus_sign == false)
	{
		if ('8' <= str_i && str_i <= '9')
		{
			return (1);
		}
	}
	else if (ans > LONG_MAX / 10 && minus_sign == false)
		return (1);
	else if (ans == LONG_MAX / 10 && minus_sign == true && ('9' <= str_i))
		return (2);
	else if (ans > LONG_MAX / 10 && minus_sign == true)
		return (2);
	return (0);
}

static long	ft_strtol(const char *str, bool is_minus)
{
	long	ans;
	int		i;

	i = 0;
	ans = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (ft_check(str[i], is_minus, ans) == 1)
			return (LONG_MAX);
		else if (ft_check(str[i], is_minus, ans) == 2)
			return (LONG_MIN);
		ans *= 10;
		ans += str[i] - 48;
		i++;
	}
	if (is_minus)
		ans *= -1;
	return (ans);
}

int	ft_atoi(const char *str)
{
	int		num;
	bool	is_minus;

	is_minus = false;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_minus = true;
		str++;
	}
	num = (int)ft_strtol(str, is_minus);
	return (num);
}
