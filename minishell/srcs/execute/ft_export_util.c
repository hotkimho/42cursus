/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:43:58 by hkim2             #+#    #+#             */
/*   Updated: 2022/05/31 12:15:00 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	free_split_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	is_vaild_word(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	if (c == '_')
		return (1);
	return (0);
}

int	get_duplicate_index(char *cmd, char **env)
{
	int		i;
	char	**split;
	char	**split_cmd;

	split_cmd = ft_split(cmd, '=');
	if (!split_cmd)
		return (-1);
	i = -1;
	while (env[++i])
	{
		split = ft_split(env[i], '=');
		if (!split)
			return (-1);
		if (ft_strlen(split[0]) == ft_strlen(split_cmd[0]))
		{
			if (check_dup(split, split_cmd))
				return (free_and_return_idx(i, split, split_cmd));
		}
		free_split_str(split);
	}
	free_split_str(split_cmd);
	return (-1);
}

int	add_duplicate_key(char *cmd, char ***env)
{
	char	*tmp;
	int		key_index;

	key_index = get_duplicate_index(cmd, *env);
	if (key_index == -1)
		return (-1);
	tmp = ft_strdup(cmd);
	if (!tmp)
		return (EXIT_FAILURE);
	free((*env)[key_index]);
	(*env)[key_index] = tmp;
	return (EXIT_SUCCESS);
}

int	add_new_value(char *cmd, char ***env)
{
	int		i;
	char	**tmp;
	int		len;

	len = 0;
	while ((*env)[len])
		len++;
	tmp = (char **)malloc(sizeof(char *) * (len +2));
	if (!tmp)
		return (EXIT_FAILURE);
	i = 0;
	while (i < len)
	{
		tmp[i] = ft_strdup((*env)[i]);
		free((*env)[i]);
		i++;
	}
	free(*env);
	tmp[len] = ft_strdup(cmd);
	tmp[len + 1] = NULL;
	i = 0;
	(*env) = tmp;
	return (EXIT_SUCCESS);
}
