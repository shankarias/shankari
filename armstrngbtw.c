#include <stdio.h>

int main()
{
	int a,b,i,t,n,rem;
	scanf("%d%d",&a,&b);
	printf("%d%d",a,b);
	for(i=a+1;i<b;i++)
	{
		t=i;
		n=0;
		while(t!=0)
	{
		rem=t%10;
		n=n+rem*rem*rem;
		t=t/10;
	}
	if(i==n)
	{
		printf("%d",i);
	}
	}
		
	return 0;
}
