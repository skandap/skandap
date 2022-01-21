#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int key[20],n,m;
int *ht,i;
int count = 0;
void insert(int key)
{
i = key % m;
while(ht[i] != -1)
{
i = (i+1)%m;
}
ht[i] = key;
count++;
}
void display()
{
int i;
if(count == 0)
{
printf("\nHash Table is empty");
return;
}
printf("\nHash Table contents are:\n ");
for(i=0; i<m; i++)
printf("\n T[%d] --> %d ", i, ht[i]);
}
int main()
{
int i;
printf("\nEnter the number of employee records (N) : ");
scanf("%d", &n);
printf("\nEnter the two digit memory locations (m) for hash table: ");
scanf("%d", &m);
ht = (int *)malloc(m*sizeof(int));
for(i=0; i<m; i++)
ht[i] = -1;
printf("\nEnter the four digit key values (K) for N Employee Records:\n ");
for(i=0; i<n; i++)
scanf("%d", &key[i]);
for(i=0;i<n;i++)
{
if(count == m)
{
printf("\n~~Hash table is full. Cannot insert the record %d key~~",i+1);
break;
}
insert(key[i]);
}
//Displaying Keys inserted into hash table
display();
}