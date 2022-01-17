#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	char buf[2048];
	int count;
	
	if(argc >1){
	    for(int x = 1; x<argc; x++)
	    {
	        int fd = open(argv[x], O_RDWR);
            if (fd == -1){
    	        perror("open");
    			}
            while(1)
            {
    			count = read(fd, buf, sizeof buf);
				for(long unsigned int x = 0; x <= sizeof buf; x++){
					buf[x] = toupper(buf[x]);
				}
    			write(1, buf, count);
    			if(count == 2048){
    			    continue;
    			}else{
    			    break;
    			}
		    }
		    write(1, "\n", 2);
    		close(fd);
	    }

	}else{
		while(1){
			count = read(0, buf, sizeof buf);
			if(count <= 1){
				break;
			}
			for(long unsigned int x = 0; x <= sizeof buf; x++){
				buf[x] = toupper(buf[x]);
			}
			write(1, buf, count);
		}
	}
}
