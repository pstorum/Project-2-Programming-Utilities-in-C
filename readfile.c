#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char buf[2048];
	int count;
	
	if(argc != 2){
		write(1, "Usage: ./readfile [filename]\n", 31);
	}
	
	int fd = open(argv[1], O_RDWR);
	if (fd == -1){
		perror("open");
	}
	
	count = read(fd, buf, sizeof buf);
	write(1, buf, count);
	write(1, "\n", 2);
	close(fd);
	
}
