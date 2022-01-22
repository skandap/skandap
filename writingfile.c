#include<stdio.h>
int main()
{
    FILE *fptr;
    int number=100;
    fptr=fopen("prasad.txt","w");
fprintf(fptr,"the number is %d\n",number);
fprintf(fptr,"thanks for using the  fprintf",number);
fclose(fptr);
    return 0;
    
}