/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuruno- <lfuruno-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:51:27 by lfuruno-          #+#    #+#             */
/*   Updated: 2023/12/07 15:14:43 by lfuruno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd;
	fd = open("file.txt", O_RDONLY);
	get_next_line(fd);
	//printf("%s", get_next_line(fd)); // Never gonna give you up
	//printf("%s", get_next_line(fd)); // Never gonna let you down
	//printf("%s", get_next_line(fd)); // Never gonna run around and desert you
	close(fd);
}
