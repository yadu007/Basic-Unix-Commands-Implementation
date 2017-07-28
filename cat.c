#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
 FILE *fp;
 char ch; 

    fp=fopen(argv[1], "r");
 
    while((ch=fgetc(fp)) != EOF){
         putchar(ch);
    }
    printf("\n")
    fclose(fp);
 
return 0;
}
