#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max_size 3
int top=-1;
int stack[max_size];
void push();
void pop();
void pali();
void display();
void main()
{
    int choice;
do{
    printf("menu\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.pali\n");
    printf("4.display\n");
    printf("5.exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:pali();
        break;
        case 4:display();
        break;
        case 5:exit(0);
        break;
        default:printf("invalid operation\n");
        break;
    }
}
    while(choice!=5);
 
}
void push()
{
    int item;
    if(top==(max_size-1))
    {
        printf("stack is overflow\n");
    }
    else
    {
        printf("enter the item to be inserted: \n");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("the stack is underflow: \n");
    }
    else
    {
     item=stack[top];
         top=top-1;
        printf("the item poped is %d:\n",item);
    }
}
void pali()
{
    int len=top+1,ind=0,i=0,j,k,digit;
    int rev[max_size],num[max_size];
     int lenght=0;
     while(top!=-1)
     {
         digit=stack[top];           //digit=2; num[0]=1;num[1]=2,num[2]=2 top--,i++; 121 are the elements which has been pushed
         num[i]=digit;
         top--;
         i++;
     }
     for(j=0;j<len;j++)          //len=2+1=3     (j=0;j<3;j++) it will print the numbers 121
     {
         printf("number=%d\n",num[j]);
     }
     printf("the reverse operation :\n");
     for(k=len-1;k>=0;k--)
     {                               //(k=2;2>=0;k--)  rev[2]=num[0]  so in rev 2th pos it stores 1 and k--,ind++
         rev[k]=num[ind];
         ind++;
     }
     printf("reverse array:\n");
     for(k=0;k<len;k++)
     {
         printf("%d\n",rev[k]);
     }
     printf("check for palindrome\n");
     for(i=0;i<len;i++)
     {
         if(num[i]==rev[i])
         {
             lenght=lenght+1;
         }
     }
     if(lenght==len)
     {
         printf("it is palindome!\n");
     }
     else
     {
         printf("it is not a palindrome!\n");
     }
     top=len-1;
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("the stack elements are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}