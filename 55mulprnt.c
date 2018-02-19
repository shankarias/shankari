#include <stdio.h>

int main() 
{
	int n,m,r;
	scanf("%d\n%d",&n,&m);
	r=n*m;
	if(r%2==0)
	{
		printf("even");
	
	}
	else
	{
		printf("odd");
	}
	return 0;
}
