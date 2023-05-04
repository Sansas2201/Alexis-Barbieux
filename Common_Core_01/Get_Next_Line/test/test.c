#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	main()
{
	int fd;
	void	*buff;

	fd = open("test.txt", 1);
	read(fd, buff, 500);
	printf("%s", buff);
}
