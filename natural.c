#include<stdio.h>
int sum(int n);
int main()
{
    int n,result;
    printf("enter the number\n");
    scanf("%d",&n);
    result=sum(n);
    printf("the natural number is %d\n",result);
    return 0;
}
int sum(int n)
{
    if(n!=0)
    {
        return(n+sum(n-1));
    }
    else
        return 0;
}