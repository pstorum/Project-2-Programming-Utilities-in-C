#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc <= 2){
		printf("Usage: %s [command]\n", argv[0]);
	}
    for (int x = 0; x < argc; x = x + 1){
		char *temp_arg = argv[x];
		printf("%i: %s \n", x, temp_arg);
    }
}
