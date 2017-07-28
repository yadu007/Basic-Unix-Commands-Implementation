    #include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<stdlib.h>
    int main(int argc,char **argv)
    {
    struct dirent **name;
    int n;
   if (argc == 1)
   {
   n=scandir(".",&name,NULL,alphasort);
   }
   else
   {
   n = scandir(argv[1], &name, NULL, alphasort);
   }
   if(n < 0)
   {
 perror("scandir");
   exit(EXIT_FAILURE);
   }
   else
   {
   while (n--)
   {
   printf("%s\n",name[n]->d_name);
   free(name[n]);
   }
   free(name);
   }
   exit(EXIT_SUCCESS);
   }

