#include<stdio.h>
int main()
{
int n,c=0,r=1,b=2,i;
scanf("%d",&n);
while(n!=1)
{
n=n/2;
c++;
}
for(i=0;i<c+1;i++)
{
r=r*b;
}
printf("%d",r);
}
