#include<stdio.h>
#include<string.h>

int main()
{
	int count=0,i;
	char a[50];
	scanf("%s",a);
	for(i=0;a[i];i++)
	{	
         if(ispunct(a[i]))
         {
         	count++;
         }

	}
	printf("%d",count);
	return 0;
}
