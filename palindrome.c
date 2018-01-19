#include<stdio.h>
int main()
{
	int n,rem,rev=0,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(t==rev)
	printf("palindrome",n);
	else
	printf("not palindrome",n);
	return 0;
	}
	
