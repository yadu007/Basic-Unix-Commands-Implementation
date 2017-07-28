#include<stdio.h>

void main(int argc, char* argv[]){
if(argc!=2 || argv[1]=="--help")
  {
    printf("\nusage: rm FileTodelete\n");
  }
int status;
status=remove(argv[1]);
if(status==0)
  {
    printf("successfull\n");
  }
else
   {
    printf("Unsuccessfull\n");
   }
}