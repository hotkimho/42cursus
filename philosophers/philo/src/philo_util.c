/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 00:41:15 by hkim2             #+#    #+#             */
/*   Updated: 2022/05/02 20:27:08 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"

int	check_must_eat(t_info *info)
{
	int	idx;
	int	must_eat;

	must_eat = info->must_eat;
	idx = 0;
	while (idx < info->num_of_philo)
	{
		pthread_mutex_lock(&info->eat_mutex);
		if (info->philos[idx].num_of_eat < must_eat)
		{
			pthread_mutex_unlock(&info->eat_mutex);
			return (FAILURE);
		}
		pthread_mutex_unlock(&info->eat_mutex);
		idx++;
	}
	return (SUCCESS);
}

int	check_death(t_philo *philo)
{
	long long	time;

	pthread_mutex_lock(&philo->info->check_mutex);
	if (philo->info->is_death)
	{
		pthread_mutex_unlock(&philo->info->check_mutex);
		return (FAILURE);
	}
	pthread_mutex_unlock(&philo->info->check_mutex);
	pthread_mutex_lock(&philo->info->last_eat_mutex);
	time = get_time() - philo->last_eat_time;
	pthread_mutex_unlock(&philo->info->last_eat_mutex);
	if (time > (long long) philo->info->time_to_die)
		return (SUCCESS);
	return (FAILURE);
}

long long	get_time(void)
{
	struct timeval	current;
	long long		current_time;

	gettimeofday(&current, NULL);
	current_time = (current.tv_sec * 1000) + (current.tv_usec / 1000);
	return (current_time);
}

void	custom_sleep(long long time)
{
	long long	finish_time;

	finish_time = time + get_time();
	while (finish_time > get_time())
	{
		usleep(100);
	}
}
