#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a,n;
    printf("enter the value which is to be multiplied\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        a=n*i;
    
    printf("the multiplication table is %d*%d=%d\n",n,i,a);
    }
    return 0;
}