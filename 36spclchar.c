#include<stdio.h>
#include<string.h>

int main()
{
	int count=0,i;
	char c[50];
	scanf("%s",c);
	for(i=0;c[i];i++)
	{	
         if(ispunct(c[i]))
         {
         	count++;
         }

	}
	printf("%d",count);
	return 0;
}
