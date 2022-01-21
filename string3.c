#include<stdio.h>
int main()
{
    char str[34];
    printf("enter your brand name: ");
    //scanf("%s",str);
    gets(str);
    puts(str);
    //printf("your name is: %s",str);
    return 0;
}