#include <stdio.h>
#include<string.h>
int main() 
{
int i,k,n;
char a[100];
scanf("%s",&a);
scanf("%d",&k);
n=strlen(a);
for(i=0;i<k;i++)
{
	printf("%c",a[i]);
}
	return 0;
}
