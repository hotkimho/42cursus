/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 18:14:40 by hkim2             #+#    #+#             */
/*   Updated: 2022/05/31 12:15:47 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

char	**get_cmd_path(char **env)
{
	int		i;
	char	**path;
	int		len;

	len = 0;
	while (env[len])
		len++;
	i = -1;
	while (env[++i])
		if (ft_strncmp(env[i], "PATH=", 5) == 0)
			break ;
	if (len == i)
		return (NULL);
	path = ft_split(env[i] + 5, ':');
	if (!path)
		return (NULL);
	return (path);
}

char	*check_completed_cmd(char *cmd)
{
	struct stat	file_info;

	if (stat(cmd, &file_info))
		return (NULL);
	if (S_ISREG(file_info.st_mode))
		return (cmd);
	return (NULL);
}

char	*get_cmd(char **path, char *cmd, int *status)
{
	int		cmd_idx;
	char	*add_slash_cmd;
	char	*path_cmd;

	if (check_completed_cmd(cmd))
		return (ft_strdup(cmd));
	if (path == NULL)
	{
		*status = 1;
		return (NULL);
	}
	add_slash_cmd = ft_strjoin("/", cmd);
	if (!add_slash_cmd)
		return (NULL);
	cmd_idx = find_cmd_index(path, add_slash_cmd);
	if (cmd_idx < 0)
	{
		free(add_slash_cmd);
		return (NULL);
	}
	path_cmd = ft_strjoin(path[cmd_idx], add_slash_cmd);
	if (!path_cmd)
		return (NULL);
	free(add_slash_cmd);
	return (path_cmd);
}

int	find_cmd_index(char **path, char *cmd)
{
	int			i;
	char		*str;
	struct stat	file_info;

	i = -1;
	while (path[++i])
	{
		str = ft_strjoin(path[i], cmd);
		if (stat(str, &file_info))
		{
			free(str);
			continue ;
		}
		if (S_ISREG(file_info.st_mode))
		{
			if (!(file_info.st_mode & S_IXUSR))
				exit_print_per(str);
			free(str);
			return (i);
		}
		free(str);
	}
	return (-1);
}

void	init_env(char ***env)
{
	char		*str;
	int			level;
	char		*str_level;

	str = getenv("SHLVL");
	if (!str)
	{
		add_env("SHLVL=1", env);
		return ;
	}
	level = ft_atoi(str);
	level++;
	str_level = ft_itoa(level);
	str = ft_strjoin("SHLVL=", str_level);
	add_env(str, env);
	free(str_level);
	free(str);
	str_level = ft_itoa(0);
	str = ft_strjoin("ERROR_STATUS=", str_level);
	add_env(str, env);
	free(str);
	free(str_level);
}
