#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 4
int ch,front=0,rear=-1,count=0;
int q[max],item;

void insert()
{
    if(count==max)
    {
        printf("queue is full\n");
    }
    else
    {
        rear=(rear+1)%max;
        q[rear]=item;
        count++;
    }
}

void del()
{
    if(count==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        if(front>rear&&rear==max)
        {
            rear=-1;
            front=0;
            count=0;
        }
        else
        {
           item=q[front];
            printf("deleted item is %d\n",item);
             front=(front+1)%max;
             count--;
        }
    }
}

void display()
{
    int i,f;
    if(count==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("the content of tyhe queue is \n");
        for(i=0,f=front;i<=count;i++)
        {
            printf("%d\t",q[f]);
            f=(f+1)%max;
        }
    }
}

void main()
{
    do{
        printf("\n1.insert\t 2.delete\t 3.display\t 4.exit\t\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter the item to be inserted\n");
            scanf("%d",&item);
            insert();
            break;
            case 2: del();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default: printf("invalid operation\n");
        }
    }
    while(ch!=4);
}