#include<stdio.h>
void printTable(int mult);
{
    int mult,n;
for(int i=1;i<=10;i++)
{
    mult=n*i;
    printf("the multiplication table is %d*%d=%d\n",n,i,mult);
}
}
int main()
{
    int num,mult;
    printf("enter the multiplication table which to be print\n");
    scanf("%d",&num);
    mult=printTable(num);
    return 0;
}