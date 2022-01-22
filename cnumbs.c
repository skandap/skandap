#include<Stdio.h>
typedef struct complex{
    int real;
    int complex;
}comp;
void display(comp c)
{
    printf("the value of real part is %d\n",c.real);
    printf("the value of imaginary part is %d\n",c.complex);
}
int main()
{
    comp cnumbs[5];
    for(int i=0;i<5;i++)
    {
    printf("enter the real value for %d num\n",i+1);
    scanf("%d",&cnumbs[i].real);
    printf("enter the complex value for %d num\n",i+1);
    scanf("%d",&cnumbs[i].complex);
    }
    for(int i=0;i<5;i++)
    {
        display(cnumbs[i]);
    }
    return 0;
}