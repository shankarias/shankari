#include <stdio.h>

int main()
{
 int a,c;
 scanf("%d%d",&a,&c);
 {
 	a=a+c;
 	c=a-c;
 	a=a-c;
 }
 printf("%d\n%d",a,c);
	return 0;
}
