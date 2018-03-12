#include<stdio.h>
int main()
{
    int i,count=0;
	char a[100];
    scanf("%s",a);	
    for(i=0;a[i]!=0;i++)
    {

	    if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
	       count++;
		}
    }
    if(count>0)
    {
	    	printf("yes");
	 		}
	else
	{
	printf("no");
	}
	return 0;
}
