#include<stdio.h>
void slice(char *str,int m,int n);
int main()
{
    char str[]="skanda";
    slice(str,1,4);
    printf("%s",str);
    return 0;
}
void slice(char *str,int m,int n)
{
    int i=0;
    while((m+i)<n)
    {
        str[i]=str[i+m];
        i++;
    }
    str[i]='\0';
}
