#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
double compute(char symbol,double op1,double op2)
{
    switch(symbol)
    {
        case'+': return op1+op2;
        case'-': return op1-op2;
        case'/': return op1/op2;
        case'%': return (int)op1%(int)op2;
        case'^': return pow(op1,op2);
        default: printf("invalid symbol\n");
    }
}
void main()
{
    int i,top;
    char symbol,postfix[20];
    double op1,op2,res,s[20];
    printf("enter the postfix expression\n");
    gets(postfix);
    top=-1;
    for(i=0;i<strlen(postfix);i++)
    {
        symbol=postfix[i];
        if(isdigit(symbol))
        {
            s[++top]=symbol-'0';
        }
        else
        {
            op2=s[top--];
            op1=s[top--];
            res=compute(symbol,op1,op2);
            s[++top]=res;
        }
    }
    s[--top]=res;
    printf("the result is %f\n",res);
    }

