#include <stdio.h>
int main()
{
	int s,k,a;
	scanf("%d%d",&s,&k);
	a=s*k;
	if(a/s==s)
	printf("yes");
	else
	printf("no");
	return 0;
}
