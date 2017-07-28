 #include<stdio.h>
#include<dirent.h>
#include<string.h>
#include<stdlib.h>
void recursive(const char *name, int indent);

int main(int argc,char **argv)
 {

   struct dirent **name;
   int n;
//printf("%s",argv[1]);
   if (argc == 1)
    {
     n=scandir(".",&name,NULL,alphasort);
      while (n--)
       {
         printf("%s\n",name[n]->d_name);
         free(name[n]);
       }
      free(name);
   }
  else if(argc==2 || argv[1]=="-R"){
  //printf("sd\n");
   recursive(".",0);
  // return 0;

    }
   exit(EXIT_SUCCESS);
   }

void recursive(const char *name, int indent)
{
    DIR *dir;
    struct dirent *entry;

    if (!(dir = opendir(name)))
        return;

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_DIR) {
            char path[1024];
            if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0)
                continue;
            sprintf(path,"%s",entry->d_name);
            printf("%*s[[%s]]\n", indent, "", entry->d_name);
            recursive(path, indent+3);
        } else {
            printf("%*s-> %s\n", indent, "", entry->d_name);
        }
    }
    closedir(dir);
}


