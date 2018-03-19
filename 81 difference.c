#include <stdio.h>
int main() 
{
	int a,b,i;
	for(i=1;i<=3;i++)
	{
	scanf("%d %d\n",&a,&b);
	if(a>b)
	{
		printf("\n%d",a-b);
	}
	else
	{
		printf("\n%d",b-a);
	}
	}
	return 0;
}
