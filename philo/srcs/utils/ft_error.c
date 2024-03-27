/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:22:05 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/27 16:22:06 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"

static size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_error(char *error_text)
{
	char red_changer[] = "\033[0;31m";
	char no_color_changer[] = "\033[0m";

	write(1, red_changer, ft_strlen(red_changer));
	write(1, error_text, ft_strlen(error_text));
	write(1, no_color_changer, ft_strlen(no_color_changer));
	return (1);
}
