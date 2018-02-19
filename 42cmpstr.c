#include<stdio.h>
int main()
{
char a[10],b[10];
int n,m;
scanf("%s\n%s",a,b);
n=strlen(a);
m=strlen(b);
if(n==m)
{
	printf("equal\n");
}
else
{
	printf("not equa\nl");
}
if(n>m)
{
	printf("%s",a);
}
else
{
	printf("%s",b);
}
return 0;
}
