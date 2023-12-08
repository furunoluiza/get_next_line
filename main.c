/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:04:41 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/12/07 17:04:45 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int	fd;
	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd)); // Never gonna give you up
	printf("%s", get_next_line(fd)); // Never gonna let you down
	printf("%s", get_next_line(fd)); // Never gonna run around and desert you
	close(fd);
}
