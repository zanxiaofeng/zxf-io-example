#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h> 

int main(int argc, char *argv[]) {
	if (argc < 3){
		printf("Usage: ./file-create-at <dir> <filename>\n");
		return 1;
	}

	printf("We have %d arguments:\n", argc);
	for (int i = 0; i < argc; ++i)
	{
		printf("[%d] %s\n", i, argv[i]);
	}


	int dirFd = open(argv[1], O_RDONLY|O_DIRECTORY);
	if (dirFd == -1){
		printf("Error when open a dir %s\n", argv[1]);
		return 1;
	}

	int fileFd = openat(dirFd, argv[2], O_WRONLY|O_CREAT|O_TRUNC, 0777);
	if (fileFd == -1){
		printf("Error when create a file at %s\n", argv[1]);
		return 1;
	}

	printf("Successfully created a file %s at %s\n", argv[2], argv[1]);
    return 0; 
}