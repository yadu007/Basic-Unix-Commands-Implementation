#include<stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(int argc, char* argv[]){


if(argc!=2 || argv[1]=="--help")
  {
    printf("\nusage: rm FileTodelete\n");
   // break;
  }
char *cmd = "mkdir";
char *args[3];
args[0] = "mkdir";
args[1] = argv[1];
args[2] = NULL;

execvp(cmd, argv);
}