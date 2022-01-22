#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int RockPaperScissors(char you,char comp)
{
if(you == comp)
{
    return 0;       //draw condition
}

 if(you=='r' && comp=='p')     //non-draw conditions
{
    return 1;                      //1
}
  else if(you=='p' && comp=='r')
{
    return -1;
}
if(you=='r' && comp=='s')
{                                    //2
    return 1;
}
 else if(you=='s' && comp=='r')
{
    return -1;                         
}
if(you=='s' && comp=='p')
{
    return 1;                         //3
}
else if(you=='p' && comp=='s')
{
    return -1;
}
}
int main()
{
    char you,comp;
    srand(time(0));
    int number=rand()%100+1;
    if(number<33)
    {
        comp='r';
    }
    else if(number>33 && number<66)
    {
        comp='p';
    }
    else 
    {
        comp='s';
    }
    printf("Enter 'r' for ROCK , 'p' for paper and 's' for Scissors\n" );
    scanf("%c",&you);
    int result=RockPaperScissors(you,comp);
    printf("you choose %c and computer choose %c\n",you,comp);
    if(result==0)
    {
        printf("Game draw!\n");
    }
    else if(result==1)
    {
        printf("You won!\n");
    }
    else
        {
         printf("you Lose!\n");   
        }
        return 0;
    }
    
