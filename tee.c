#include<stdio.h>
void main(int argc,char* argv[]){
//int c;
FILE *fp;
char input[100];
int nbytes;
//fp=fopen(argv[1],"a");
while(1){
fp=fopen(argv[1],"a+");
scanf("%s",input);
printf("%s",input);
fprintf(fp,"%s\n",input);
fclose(fp);
//putchar(input);
}

}
