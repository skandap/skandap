#include<stdio.h>
int main()
{
    int weeks,n1,n2,amount;
    printf("enter the number to which city you want to travel 1.banglore 2.hydrabad 3.kolar\n");
    scanf("%d",&n1);
    printf("enter the number of weeks you are willing to travel\n");
    scanf("%d",&n2);
    if(n1==1 && n2==1)
    {
        printf("you selected banglore for 1 week\n");
amount=1000;
printf("the amount to be paid is %d\n",amount);
    }
    if(n1==1 && n2==2)
    {
        printf("you are selected banglore for 2 weeks");
        amount=1500;
        printf("the amount to be paid is %d\n",amount);
    }
    if(n1==2 && n2==1)
    {
        printf("you selected hydrabad for 1 week\n");
amount=2000;
printf("the amount to be paid is %d\n",amount);
    }
    if(n1==2 && n2==2)
    {
        printf("you selected hydrabad for 2 week\n");
amount=2500;
printf("the amount to be paid is %d\n",amount);
}
if(n1==3 && n2==1)
    {
        printf("you selected kolar for 1 week\n");
amount=3000;
printf("the amount to be paid is %d\n",amount);
    }
if(n1==3 && n2==2)
    {
        printf("you selected kolar for 2 week\n");
amount=3500;
printf("the amount to be paid is %d\n",amount);
    }
    return 0;
    }