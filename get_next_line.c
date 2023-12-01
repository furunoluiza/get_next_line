/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:17:02 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/11/30 22:46:56 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char	*get_next_line(int fd)
{
	size_t	line_bytes;
	char	*line;
	char	*read_output;
	static char	*rest;

	if (fd = 0 || BUFFEZ_SIZE <= 0)
		return (NULL);
	line_bytes = read_line(fd, *read_output, *rest)
	if (!read_output)
		return (NULL);
	line = cut_line(fd, line_bytes);
	rest = rest_line(fd, line_bytes);
	return (line);
}

