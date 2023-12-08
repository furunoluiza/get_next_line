/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:17:53 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/12/07 17:42:16 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc ((ft_strlen(s) + 1) * sizeof (char));
	if (!p)
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	size_t	i;
	size_t	j;

	if (!s1)
		s1 = ft_strdup("");
	i = 0;
	j = 0;
	p = (char *)malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	free(s1);
	return (p);
}

char	*ft_strchr(const char *str, int ch)
{
	unsigned char	*end_str;

	if (!str)
		return (NULL);
	end_str = ((unsigned char *) str);
	while (*end_str)
		end_str++;
	if (ch == '\0')
		return ((char *) end_str);
	while (*str)
	{
		if (*str == ch)
			return ((char *) str);
		str++;
	}
	return (NULL);
}
