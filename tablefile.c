#include<stdio.h>
int main()
{
FILE *ptr;
int num;
ptr=fopen("apple.txt","w");
printf("enter the number wich to be print the multiplication table");
scanf("%d",&num);
for(int i=1;i<=10;i++)
{
fprintf(ptr,"%d*%d = %d\n",num,i,num*(i));
}
fclose(ptr);
return 0;
}