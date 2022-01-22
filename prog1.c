#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create_array(int a[],int n)           //creating an array
{
for(int i=0;i<n;i++)
{
    scanf("%d\n",&a[i]);
}
}
void display_array(int a[],int n)          //disply of the list
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);

    }
}

int insert_at_pos(int item,int a[],int n,int pos)       //insertion
{
    if(pos>n||pos<0)
    {
        printf("invalid position");
        return n;
    }
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
     a[pos]=item;
      return n+1;
}
int delete_at_pos(int a[],int pos,int n)                 //deletion
{
    if(pos>=n||pos<0)
    {
        printf("invalid operation");
        return n;
    }
printf("item to be deleted is %d\n",a[pos]);
    for(int i=pos+1;i<n;i++)
    a[i-1]=a[i];
    return n-1;
}
void main()
{
    
    int choice,a[40],n,item,pos;
    //clrscr();
    //system("cls");
   
    for(;;)
    {
        printf(".......menu......\n");
        printf("1.create the list\n 2.display the list\n  3.insertion of the element\n  4.deletion of the element\n  5.exit\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
     case 1:
             printf("enter the number of elements\n");
            scanf("%d",&n);
            printf("enter the  %d elements\n",n);
            create_array(a,n);
            break;
     case 2:
             printf("the content of the array are\n");
            display_array(a,n);
            break;
    case 3: 
            printf("enter the item to be inserted\n");
            scanf("%d",&item);
            printf("enter the position\n");
            scanf("%d",&pos);
            n=insert_at_pos(item,a,n,pos);
            break;
    case 4:
            printf("enter the position\n");
            scanf("%d",&pos);
            n=delete_at_pos(a,pos,n);
            break;

    case 5:exit(0);

    default:("invalid choice\n");
    break;

        }
}
}