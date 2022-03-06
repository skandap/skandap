#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max_size 3
int stack[max_size],top=-1;
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
             default: printf("invalid operation\n");
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
        printf("stack overflow");
    }
    else{
        printf("enter the element to be inserted\n");
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
        printf("stack is underflow\n");
    }
    else{
        item=stack[top];
        top=top-1;
        printf("the element poped is %d\n",item);
    }
}
void pali()
{
    int len=top+1,lenght=0,i=0,j,k,ind=0,digit;
    int rev[max_size],num[max_size];
    while(top!=-1)
    {
        digit=stack[top];
        num[i]=digit;
        i++;
        top--;
    }
    for(j=0;j<len;j++)
    {
        printf("number=%d\n",num[j]);
    }
    printf("the reverse operation :");
    for(k=len-1;k>=0;k--)
    {
       rev[k]=num[ind];
       ind++;
    }
    printf("the reverse array\n");
    for(k=0;k<len;k++)
    {
        printf("%d\n",rev[k]);
    }
    printf("check for palindrome\n");
    for(i=0;i<len;i++)
    {
        rev[k]==num[i];
        lenght=lenght+1;
        k++;
    }
    if(len==lenght)
    {
        printf("it is palindrome\n");

    }
    else{
        printf("it is not a paindrome\n");
    }
    top=len-1;
    }
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("the stack elements are:");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}


