/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 19:10:13 by hkim2             #+#    #+#             */
/*   Updated: 2021/06/17 18:28:45 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

char			*ft_strdup(const char *s1)
{
	char		*ptr;

	ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	return (ptr);
}

size_t			ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t		len;
	size_t		i;

	i = 0;
	len = 0;
	while (*(src + i))
		i++;
	if (dest == 0 && src == 0)
		return (i);
	while (*src && len + 1 < n)
	{
		*dest++ = *src++;
		len++;
	}
	if (n > 0)
		*dest = 0;
	return (i);
}

size_t			ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char			*ft_strjoin(char *s1, char *s2)
{
	char		*ptr;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("");
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	ptr[0] = 0;
	ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
	ft_strlcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	free(s1);
	return (ptr);
}
