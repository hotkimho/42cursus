/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:51:56 by hkim2             #+#    #+#             */
/*   Updated: 2022/05/31 11:35:07 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	close_pipe(t_cmd *cmd_list)
{
	close(cmd_list->pip[0]);
	close(cmd_list->pip[1]);
}

void	print_execute_error(char *cmd, int error_code)
{
	ft_putstr_fd(cmd, STDERR);
	ft_putendl_fd(": command not found", STDERR);
	exit(error_code);
}

void	set_child_process_status(t_cmd *cmd_list, char ***env)
{
	if (WTERMSIG(cmd_list->status))
		set_error_status(env, WTERMSIG(cmd_list->status) + 128);
	else
		set_error_status(env, WEXITSTATUS(cmd_list->status));
}

int	is_redirection(char *cmd)
{
	if (ft_strncmp(cmd, ">", 1) == 0)
		return (1);
	if (ft_strncmp(cmd, "<", 1) == 0)
		return (1);
	if (ft_strncmp(cmd, ">>", 2) == 0)
		return (1);
	if (ft_strncmp(cmd, "<<", 2) == 0)
		return (1);
	return (0);
}
