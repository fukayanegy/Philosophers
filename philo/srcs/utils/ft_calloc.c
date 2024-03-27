/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:45:05 by etakaham          #+#    #+#             */
/*   Updated: 2024/03/16 17:52:11 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../headers/philosophers.h"
# include <limits.h>

static void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*ptr_sub;

	ptr_sub = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		ptr_sub[i] = (unsigned char)value;
		i++;
	}
	ptr = (void *)ptr_sub;
	return (ptr);
}

static void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s_sub;

	if (nmemb == 0 || size == 0)
	{
		ft_error(CALLOC_ERROR);
		return (NULL);
	}
	if (nmemb > SIZE_MAX / size)
	{
		ft_error(CALLOC_ERROR);
		return (NULL);
	}
	s_sub = malloc(nmemb * size);
	if (s_sub == NULL)
	{
		ft_error(LOW_MEMORY);
		exit(1);
	}
	ft_bzero(s_sub, nmemb * size);
	return (s_sub);
}
