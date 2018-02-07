#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    m=(n&(n-1));
    if(m==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
