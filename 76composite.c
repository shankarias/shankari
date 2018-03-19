#include<stdio.h>
int main()
{
    int i,n,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        t=t+1;
    }
    if(t==2)
    printf("no");
    else
    printf ("yes");
    return 0;
}
