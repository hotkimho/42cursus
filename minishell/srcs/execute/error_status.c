/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_status.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:57:15 by hkim2             #+#    #+#             */
/*   Updated: 2022/05/31 12:14:15 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	set_error_status(char ***env, int status)
{
	char		*str;
	char		*itoa_status;

	itoa_status = ft_itoa(status);
	str = ft_strjoin("ERROR_STATUS=", itoa_status);
	add_env(str, env);
	free(itoa_status);
	free(str);
}

void	set_parent_process_status(t_cmd *cmd_list, char ***env)
{
	close_pipe(cmd_list);
	set_child_process_status(cmd_list, env);
}

void	exit_print_per(char *str)
{
	ft_putstr_fd(str, 2);
	ft_putendl_fd(" Permission denied", 2);
	free(str);
	exit(126);
}

int	check_dup(char **split, char **split_cmd)
{
	if (ft_strncmp(split[0], split_cmd[0],
			ft_strlen(split[0])) == 0)
		return (1);
	return (0);
}

int	free_and_return_idx(int i, char **split, char **split_cmd)
{
	free_split_str(split);
	free_split_str(split_cmd);
	return (i);
}
