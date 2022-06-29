/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 00:42:18 by hkim2             #+#    #+#             */
/*   Updated: 2022/05/02 20:25:49 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philosophers.h"

void	philo_one(t_philo *philo)
{
	print_msg(philo, FORK_MSG);
	custom_sleep(philo->info->time_to_die);
	print_die(philo, DIE_MSG);
	pthread_mutex_lock(&philo->info->check_mutex);
	philo->info->is_death = 1;
	pthread_mutex_unlock(&philo->info->check_mutex);
}

int	get_is_death(t_philo *philo)
{
	int	death;

	death = 0;
	pthread_mutex_lock(&philo->info->check_mutex);
	if (philo->info->is_death)
		death = 1;
	pthread_mutex_unlock(&philo->info->check_mutex);
	return (death);
}

void	*routine(void *param)
{
	t_philo	*philo;
	int		death;

	death = 0;
	philo = (t_philo *)param;
	if (philo->info->num_of_philo == 1)
	{
		philo_one(philo);
		return (NULL);
	}
	pthread_mutex_lock(&philo->info->last_eat_mutex);
	philo->last_eat_time = get_time();
	pthread_mutex_unlock(&philo->info->last_eat_mutex);
	if (philo->id % 2 == 0)
		usleep(200);
	while (!death)
	{
		take_forks(philo);
		eat(philo);
		philo_sleep(philo);
		think(philo);
		death = get_is_death(philo);
		usleep(100);
	}
	return (NULL);
}

void	*check_must_eat_routine(void *param)
{
	t_info	*info;
	int		death;

	info = (t_info *) param;
	death = 0;
	while (!death)
	{
		if (!check_must_eat(info))
		{
			pthread_mutex_lock(&info->check_mutex);
			info->is_death = 1;
			if (info->is_death)
				death = 1;
			pthread_mutex_unlock(&info->check_mutex);
			return (NULL);
		}
		usleep(10);
	}
	return (NULL);
}

void	*check_routine(void *param)
{
	t_philo		*philo;
	int			death;

	philo = (t_philo *)param;
	death = 0;
	usleep(100);
	while (!death)
	{
		pthread_mutex_lock(&philo->info->die_mutex);
		if (!check_death(philo) && philo->info->num_of_philo > 1)
		{
			print_die(philo, DIE_MSG);
			pthread_mutex_lock(&philo->info->check_mutex);
			philo->info->is_death = 1;
			pthread_mutex_unlock(&philo->info->check_mutex);
			break ;
		}
		pthread_mutex_unlock(&philo->info->die_mutex);
		pthread_mutex_lock(&philo->info->check_mutex);
		if (philo->info->is_death)
			death = 1;
		pthread_mutex_unlock(&philo->info->check_mutex);
		usleep(1000);
	}
	return (NULL);
}
