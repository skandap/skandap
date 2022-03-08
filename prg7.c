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
}
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
    newnode=(NODE*)mlloc(sizeof(NODE));
    printf("enter the USN,NAME,BRANCH,SEM,PH.NO\n");
    flushall();
    get(newnode->usn);
    flushall();
     get(newnode->name);
    flushall();
     get(newnode->branch);
    scanf("%d",&(newnode->sem)); 
    flushall();
     get(newnode->phno);
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
            prinf("student data\n");
            printf("\nUSN\tNAME\tBRANCH\tSEM\tPHO.NO\n");
            while(p!=NULL)
           {
             printf("\n%s\t%s\t%s\t%d\t%s\n");
               p->usn;
               p->name;
               p->branch;
               p->sem;
                p->ph.no;               
                p=p->next;
           } 
           printf("the number of nodes in the list is %d\n",coutnodes(head));
        }

}
void create()
{
    
}

