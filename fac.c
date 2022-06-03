#include <stdio.h>
#include<stdlib.h>
int main()
 {
    int n, i;
    int f = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n<0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else 
    {
        for (i=1;i<=n;i++) 
        {
            f=f*i;
        }
        printf("Factorial of %d is %d",n,f);
    }
    return 0;
}