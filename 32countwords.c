#include<stdio.h>
int main()
{
 int i,b=0;   
    char a[50]="hash is a goodboy";
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]==' ')
        {
            b++;
        }
    }
    printf("%d",b+1);
    return 0;
    }
