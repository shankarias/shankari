#include <stdio.h>

int main() 
{
	int a,b,c;
	scanf("%d",&a);
	b=a/60;
	printf("hrs are%d",b);
	c=a%60;
	printf("mins are %d",c);
	return 0;
}
