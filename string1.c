#include<stdio.h>
int main()
{
char str[]="skanda";
char *ptr=str;
while(*ptr!='\0')
{
    printf("%c",*ptr);
    *ptr++;
}
return 0;
}
