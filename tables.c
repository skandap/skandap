#include<stdio.h>
void printTable(int candy);
int main()
{
    int num;
    printf("enter the multiplication table which to be print\n");
    scanf("%d",&num);
    printTable(num);
    return 0;
}
void printTable(int candy)
{
    int mult;
for(int i=1;i<=10;i++)
{
    mult=candy*i;
    printf("the multiplication table is %d*%d=%d\n",candy,i,mult);
}
}