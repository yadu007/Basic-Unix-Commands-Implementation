#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
 int main(int argc, char *argv[])
{
 int fp;
 char ch[99]; 
 int op;

    fp=open(argv[1], O_RDONLY);
    
 
    while(op=read(fp,ch,99)){
	    
         write(1,ch,op);
    }
    printf("\n");
    close(fp);
 
return 0;
}
