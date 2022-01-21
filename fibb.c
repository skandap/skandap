#include<stdio.h>
int fibo(int num);
int main()
{
    int result,num;
    printf("enter the number of which u want fibo series\n");
    scanf("%d",&num);
    if(num<0)
    {
        printf("negative number is invalid here\n ");

    }
    else
    {
        result=fibo(num);
        printf("the %d number in fibo series is %d\n",num,result);
    }
    return 0;
}
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }
    else if(num==1)
    {
        return 1;
    }
    else
    {
    return (fibo(num-1)+fibo(num-2));
}
}
//0,1,1,2,3,5,8,13,.....is fib series