#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
 
#define SIZE 1024
 
int main(int argc, char* argv[])
{
	int Source,Destination,ReadBuffer,WriteBuffer;
	char *buff[SIZE];
	
	if(argc != 3 || argv[1] == "--help")
	{
		printf("\nUsage: cpcmd source destination\n");
		exit(EXIT_FAILURE);
	}
 
//printf("%s\n",argv[1]);
//printf("%s\n",argv[2]);
//printf("%d\n",argv[3]);
	Source = open(argv[1],O_RDONLY);
 
	if(Source == -1)
	{
		printf("\nError opening file %s errno = %d\n",argv[1],errno);
		exit(EXIT_FAILURE);	
	}

	Destination = open(argv[2],O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
 
	if(Destination == -1)
	{
		printf("\nError opening file %s errno = %d\n",argv[2],errno);
		exit(EXIT_FAILURE);
	}
 
	
	while((ReadBuffer = read(Source,buff,SIZE)) > 0)
	{
		if(write(Destination,buff,ReadBuffer) != ReadBuffer)
			printf("\nError in writing data to \n");
	}
	
	
	if(close(Source) == -1)
		printf("\nError in closing file\n");
 
	if(close(Destination) == -1)
		printf("\nError in closing file\n");
 
}