/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <etakaham@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:00:46 by etakaham          #+#    #+#             */
/*   Updated: 2024/02/26 19:11:41 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../headers/philosophers.h"

void	*thread_function(void *arg)
{
	pthread_mutex_t	*mutex;

	mutex = (pthread_mutex_t *)arg;
	printf("%p\n", mutex[0]);
	printf("Thread Executed\n");
	usleep(1);
	return (arg);
}

//  pthread_mutex_init, pthread_mutex_destroy, pthread_mutex_lock, pthread_mutex_unlock

# define START 0
# define N 10
int	main(void)
{
	pthread_t		*threads;
	void			*retval;
	pthread_mutex_t	*mutex;

	threads = malloc(sizeof(pthread_t) * N);
	mutex = malloc(sizeof(pthread_mutex_t) * N);
	for (int i = 0; i < 10; i++)
	{
		pthread_create(&threads[i], NULL, thread_function, (void *)mutex);
	}
	printf("finish pthread_create\n");
	for (int i = 0; i < 10; i++)
	{
		pthread_join(threads[i], (void *)mutex);
	}
	printf("finish pthread join\n");
	for (int i = 0; i < 10; i++)
	{
		pthread_detach(threads[i]);
	}
	printf("finish pthread detach\n");

	free(threads);
	free(mutex);
	return (0);
}
