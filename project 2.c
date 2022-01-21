#include<stdio.h>
#include<stdlib.h>
int main()
{
int die1,die2;
int n;


do
{
printf("welcome,you can game roll the dies now by typing 1 to play and u can exit by typing 2 \n");
scanf("%d",&n);
if(n==1) 
{
    printf("you have selected to play\n");
    die1=rand()%6+1;
    die2=rand()%6+1;
    printf("%d %d\n",die1,die2);
}
else
{
    printf("exit\n");
}
}
while(n!=2);
return 0;
}