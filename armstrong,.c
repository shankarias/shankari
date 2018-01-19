#include<stdio.h>
int main()
{
	int n,t,rem,s=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		rem=t%10;
		s=s+rem*rem*rem;
		t=t/10;
	}
	if(s==n)
	{
		printf("armstrong",n);
	}
	else
	{
		printf("not an armstrong",n);
	}
	return 0;
	}
	
