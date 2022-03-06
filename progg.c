#include<stdio.h>
#include<conio.h>
char str[100],pat[100],rep[100],ans[100];
int i,j,k,c,m,flag=0;
void stringmatch()
{
    i=j=c=m=0;
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;
            m++;
            if(pat[i]=='\0')
            {
                flag=1;
                for(k=0;rep[k]!=0;k++,j++)
                {
                    ans[j]=rep[k];
                    c=m;
                    i=0;
                }
            }
        }
        else{
            ans[j]=str[c];
            j++,c++;
            m=c;
            i=0;
        }
    }
    ans[j]='\0';
}
void main()
{
    printf("enter the string\n");
    gets(str);
    printf("enter the pattern string\n");
    //fflush(NULL);
    gets(pat);
    printf("enter the replace string\n");
    //fflush(NULL);
    gets(rep);
    stringmatch();
        if(flag=1)
        {
            printf("the resultant string is %s",ans);
        }
        else 
        {
            printf("the resultant string is not found\n");
        }
}
