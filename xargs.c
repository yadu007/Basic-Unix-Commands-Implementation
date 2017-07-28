#include<stdio.h>
void main(){
char get[233];
FILE *fp;
while(fgets(get,100,stdin)!=NULL)
{
//scanf("%s",get);
  fp=fopen("lm.txt","a+");
  fprintf(fp,"%s\n",get);
  fclose(fp);

}
char ch;
fp=fopen("lm.txt", "r");
 
    while((ch=fgetc(fp)) != EOF)
    {
         putchar(ch);
    }
    printf("\n");
    fclose(fp);

}
