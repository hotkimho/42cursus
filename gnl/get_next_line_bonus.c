/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:01:19 by hkim2             #+#    #+#             */
/*   Updated: 2021/06/17 18:46:48 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int					find_newline(char *buf)
{
	size_t			i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return ((int)i);
		i++;
	}
	return (-1);
}

int					split_newline(char **str, char **line)
{
	char			*tmp;
	int				line_size;
	size_t			last_size;

	line_size = find_newline(*str);
	if (line_size < 0)
	{
		last_size = ft_strlen(*str);
		*line = (char *)malloc(last_size + 1);
		if (line == NULL)
			return (0);
		ft_strlcpy(*line, *str, last_size + 1);
		free(*str);
		*str = NULL;
		return (0);
	}
	*line = (char *)malloc(line_size + 1);
	if (line == NULL)
		return (0);
	ft_strlcpy(*line, *str, (size_t)line_size + 1);
	tmp = ft_strdup(*str + line_size + 1);
	free(*str);
	*str = tmp;
	return (1);
}

int					read_all_file(char **str, char **line, int read_size)
{
	if (*str == NULL && read_size == 0)
	{
		*line = ft_strdup("");
		return (0);
	}
	if (split_newline(str, line))
		return (1);
	return (0);
}

int					get_next_line(int fd, char **line)
{
	static char		*str[OPEN_MAX];
	char			buf[BUFFER_SIZE + 1];
	int				read_size;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((read_size = read(fd, buf, BUFFER_SIZE)))
	{
		if (read_size == -1)
			return (-1);
		buf[read_size] = 0;
		str[fd] = ft_strjoin(str[fd], buf);
		if (0 <= (read_size = find_newline(str[fd])))
		{
			if (split_newline(&str[fd], line) == 0)
				return (-1);
			return (1);
		}
	}
	return (read_all_file(&str[fd], line, read_size));
}
