#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    //printf("the number is %d\n",number);
do
{
printf("guess number is between 1 to 100\n");
scanf("%d",&guess);
if(guess>number)
{
    printf("please enter lower number\n");
}
else if(guess<number)
{
    printf("please entrer higher number\n");
}
else{
    printf("you have guessed correct number in %d attempts\n",nguesses);
}
nguesses++;
} while (guess!=number);
return 0;
}