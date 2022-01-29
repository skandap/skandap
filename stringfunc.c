#include<stdio.h>
#include<string.h>
int main()
{

    char a[20]="program";
     char b[20]={'p','g','o','g'};
     char c[20];
     printf("enter the string :");
     gets(c);
     printf("the length of string a=%d\n",strlen(a));
      printf("the length of string b=%d\n",strlen(b));
       printf("the length of string c=%d\n",strlen(c));
       return 0;
}