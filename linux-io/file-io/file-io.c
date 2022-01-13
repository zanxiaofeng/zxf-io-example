#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h> 

int main() { 
	int fd = open("./Readme.md", O_RDONLY);
	if (fd == -1){
		printf("Error when open a file");
		return 1;
	}
    return 0; 
}