#include<stdio.h>
void search(char st[],char c);
int main()
{
    char c; char search;
    char st[]="SKANDA";
   void search=present(st[],'N');
    return 0;
}
void present(char st[],char c)
{

 char *ptr=st;
 while(*ptr==c)
 {
     printf("the give character is present in the string");
     *ptr++;
 }   
}