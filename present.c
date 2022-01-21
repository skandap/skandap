#include<stdio.h>
int present(char st[],char n)
{
    char *ptr=st;
    int x=0;
    while(*ptr!='\0')
    {
        if(*ptr==n)
        {
            printf("the character %c is present in the string",n);
           x++;
        }
        ptr++;
    }
    if(x==0)
    {
        printf("the character %c is not present in the string",n);
    }
    
}
int main()
{
    char c[50]; 
    printf("enter the string:");
    gets(c);
    char n;
    printf("eneter the character for which you want to know that the chracter is present or not :");
    scanf("%c",&n);
    present(c,n);
    return 0;
}