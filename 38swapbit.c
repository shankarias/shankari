#include <stdio.h>

int main() 
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("before swapping%d\t%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	
	printf("after swapping%d\t%d",a,b);
	return 0;
}
