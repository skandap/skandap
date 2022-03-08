#include<stdio.h.>
#include<conio.h>
#include<stdlib.h>
int max=4,count;
struct student
{
    char usn[20];
    char name[20];
    char branch[20];
    int sem;
    char phno[20];
    struct student *next;
};
typedef struct student NODE;
NODE *head;

int countnodes()
{
    NODE *p;
    p=head;
    count=0;
    while(p!=NULL)
    {
        p=p->next;
        count++;
    }
    return count;
}

NODE *getnode(NODE *head)
{
    NODE *newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    printf("enter the USN,NAME,BRANCH,SEM,PH.NO\n");
    fflush(NULL);
    gets(newnode->usn);
    fflush(NULL);
     gets(newnode->name);
    fflush(NULL);
     gets(newnode->branch);
    scanf("%d",&(newnode->sem)); 
    fflush(NULL);
     gets(newnode->phno);
    newnode->next=NULL;
    head=newnode;
    return head;
}
void display()
{
    NODE *p;
    if(head==NULL)
    {
        printf("no student data\n");
    }
        else
        {
            p=head;
            printf("student data\n");
            printf("\nUSN\tNAME\tBRANCH\tSEM\tPHO.NO\n");
            while(p!=NULL)
           {
             printf("\n%s\t%s\t%s\t%d\t%s",p->usn,p->name,p->branch,p->sem,p->phno);               
                p=p->next;
           } 
           printf("the number of nodes in the list is %d\n",countnodes(head));
        }

}
void create()
{
    NODE *newnode;
    if(head==NULL)
    {
        newnode=getnode(head);
        head=newnode;
    }
    else
    {
    newnode=getnode(head);
    newnode->next=head;
    head=newnode;
    }
}

 void insert_front()
 {
     if(countnodes(head)==max)
     {
     printf("list overflow");
     }
     else
     {
         create();
     }
 }
 
 void insert_rear()
 {
     NODE *p,*newnode;
     p=head;
     if(countnodes(head)==max)
     {
         printf("list is full(queue)\n");
     }
     else 
     {
         if(head==NULL)
         {
             newnode=getnode(head);
             newnode=head;
         }
         else
         {
             newnode=getnode(head);
             while(p->next!=NULL)
             {
                 p=p->next;
             }
             p->next=newnode;
         }
            
      }
 }

void insert()
{
    int ch;
    do 
    {
        printf("1.insert at front\t2.insert at rear\t3.exit");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert_front();
            break;
            case 2:insert_rear();
            break;
            case 3:exit;
            break;
        }
        display();
    }
    while(ch!=3);
}

void delete_front()
{
    NODE *p;
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        p=head;
        head=head->next;
        free(p);
        printf("front node is deleted\n");
    }
}

void delete_rear()
{
    NODE *p,*q;
    p=head;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    free(p);
    q->next=NULL;
    printf("last node is deleted\n");
}
void delete()
{
    int ch;
    do
    {
        printf("1.delete at front\t2.delete at end\t3.exit\n");
        printf("enetr your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:delete_front();
            break;
            case 2:delete_rear();
            break;
            case 3:exit;
            break;
        }
        display();
    }
    while(ch!=3);
}
void queue()
{
    int ch;
    do 
    {
        printf("SSL used as queue\n");
        printf("1.insert at rear\t2.delete from front\t3.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_rear();
            break;
            case 2:delete_front();
            break;
            case 3:exit;
            break;
        }
        display();
    }
    while(ch!=3);
}

void stack()
{
    int ch;
    do 
    {
        printf("SSL used as stack\n");
        printf("1.insert from front(push)\t2.delete from front(pop)\t3.exit\n");
        printf("enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_front();
            break;
            case 2:delete_front();
            break;
            case 3:exit;
            break;
        }
        display();
    }
    while(ch!=3);
}
void main()
{
    int ch,i,n;
    head=NULL;
    printf("student DataBase\n");
    do 
    {
        printf("1.create\t2.dispaly\t3.insert\t4.delete\t5.queue\t6.stack\t7.exit\n");
        printf("enetr the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("how many students  data you want to create\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
                create();
                break;
            case 2:display();
            break;
            case 3:insert();
            break;
            case 4:delete();
            break;
            case 5:queue();
            break;
            case 6:stack();
            break;
            case 7:exit;
            break;
        }

    }
    while(ch!=7);
}