#include<stdio.h>
int main()
{
    int rev=0,original,remainder,n;
    printf("enter the integer\n");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
       n=n/10;
    }
    if(original==rev)
    {
        printf("%d is palindrome\n",original);
    }
    else
    {
        
        printf("%d is not a palindrome\n",original);    
        
    }
    return 0;
}