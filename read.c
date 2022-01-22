#include<stdio.h>
int main()
{
    FILE *ptr;
    int num1;
    int num2;
    ptr=fopen("SKANDA.txt","r");
    if(ptr==NULL)
    {
        printf("this file does not exist");
    }
    else
    {
        fscanf(ptr,"%d",&num1);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);
        printf("the value of num1 is %d\n",num1);
        printf("the value of num1 is %d\n",num2);
        
    }
    return 0;
    
}