#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h> 

int main(int argc, char *argv[]) {
	if (argc < 2){
		printf("Usage: ./file-create <filename>\n");
		return 1;
	}

	printf("We have %d arguments:\n", argc);
	for (int i = 0; i < argc; ++i)
	{
		printf("[%d] %s\n", i, argv[i]);
	}


	int fd = open(argv[1], O_WRONLY|O_CREAT|O_TRUNC, 0664);
	if (fd == -1){
		printf("Error when create a file\n");
		return 1;
	}

	printf("Successfully created a file: %s\n", argv[1]);
    return 0; 
}