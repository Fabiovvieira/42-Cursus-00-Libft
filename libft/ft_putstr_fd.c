#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int	fd;
	char	*s = "fabio Valli Vieira";

	fd = open("test.txt", O_RDWR | O_CREAT | O_APPEND, S_IRWXU);
	// fd = open("test.txt", O_RDWR | O_CREAT, S_IRWXU);
	if (fd == -1)
	{
		printf("open() failed\n");
		return (1);
	}
	printf("fd = %d\n", fd);
	ft_putstr_fd(s, fd);
	if (close(fd) == -1)
	{
		printf("close() failed\n");
		return (1);
	}
	return (0);
}*/