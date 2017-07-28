#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc,char* argv[]) {
if(argc!=2)
  {
    printf("Usage:: cd Directory\n");
  }
   char *p=argv[1];
if(chdir(p)== -1)
  {
    perror("chdir");
    exit(EXIT_FAILURE);

  };

   char cwd[1024];
   if (getcwd(cwd, sizeof(cwd)) != NULL)
       fprintf(stdout, "Current working dir: %s\n", cwd);
   else
       perror("getcwd() error");
   return 0;
}

