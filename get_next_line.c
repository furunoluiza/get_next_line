/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:17:02 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/12/04 13:06:52 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*rest_line(int fd, size_t line_bytes

static char	*cut_line(int fd, size_t line_bytes)

static char	read_file(int fd, char *line)
{
	int		line_bytes
	char	*buf;

	line_bytes = 0;
	buf = (char *)malloc ((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	while (line_bytes > 0 && !ft_strchr(line, '\n'))
	{
		line_bytes = read(fd, *buf, BUFFER_SIZE);
		if (line_bytes < 0)
		{
			free(buf)
			return (NULL);
		}
		buf[line_bytes] = '\0';
		line = ft_strjoin(line, buffer);
	}
	free(buf)
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*file;
	char		*line;

	if (fd = 0 || BUFFER_SIZE <= 0)
		return (NULL);
	file = read_line(fd, file);
	if (!file)
		return (NULL);
	line = cut_line(file);
	file = rest_line(file);
	return (line);
}
