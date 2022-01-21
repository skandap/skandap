#include<stdio.h>
int main()
{
    int n,num2,amount;
    //char bannana,apple,orange;
    printf("select the fruits by entering number pres 1 forbanana,2 for orange ,3 forapple\n");
    scanf("%d",&n);
   printf("how many kg you want\n");
    scanf("%d",&num2);
    if(n==1)
    {

        printf("you selected Banana\n");
         amount=10*num2;
        printf("the amount is %d\n",amount);

    }
    if(n==2)
    {
        printf("you are selected orange\n");
         amount=30*num2;
        printf("the amount is %d\n",amount);
    }
    if(n==3)
    {
        printf("you are selected apple\n");
        amount=20*num2;
        printf("the amount is %d\n",amount);
    }
       
    return 0;
}



    





