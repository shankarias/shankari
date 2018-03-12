#include<stdio.h>
void main()
{
  int a,b,n;
  scanf("%d",&n);
  scanf("%d %d",&a,&b);
  if(n>=a&&n<=b)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
