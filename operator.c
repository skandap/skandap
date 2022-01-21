#include<stdio.h>
#include<conio.h>
void main()
{
	int a=18,b=20,c,d,e=11;
	clrscr();
	c=b++;
	d=b;
	printf("%d",a<b<c<d);
	printf("%d",b==e);
	printf("%d",c+1>e);
	printf("%d",a+c==b>e>c+d);
	getch();
}
