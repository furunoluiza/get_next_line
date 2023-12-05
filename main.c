#include "get_next_line.h"

char	*main(void)
{
	int	fd;
	char	*gnl;

	fd = open("arquivo.txt", O_RDONLY);
	gnl = get_next_line(int fd);
	return (gnl);	
}
