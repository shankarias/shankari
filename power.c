#include<stdio.h>
int main()
{
	int n,e,res=1;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the exponent");
	scanf("%d",&e);
	while(e!=0)
	{
		res=res*n;
		e--;
	}
	printf("answer=%d",res);
	return 0;
	}
	
