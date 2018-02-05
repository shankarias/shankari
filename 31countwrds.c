#include<stdio.h>
#include<string.h>
int main()
{
 int i,b=0;   
    char a[50]="hash is lovable ";
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]!=' '&&a[i]!='\n')
        {
            b++;
        }
    }
    printf("%d",b);
    return 0;
    }
