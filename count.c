#include <stdio.h>

int main()
{
	long long n;
	int count=0;
	printf("enter an integer:");
	scanf("%lld",&n);
	while(n !=0)
	{
count++;
n/=10;
		{
			printf("number of digits:%d",count);
		}
	return 0;
	
	}
	
}
