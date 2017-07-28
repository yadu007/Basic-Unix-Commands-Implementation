#include<stdio.h>
void main()
{
char *cmd = "ps";
char *args[3];
args[0] = "ps";
args[1] = "ax";
args[2] = NULL;
execvp(cmd,args);

}
