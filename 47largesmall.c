#include <stdio.h>

int main()
{
	int i,j,n,a[5],t;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	
			for(j=j+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
				
			}
		}
	printf("%d\t%d",a[0],a[n-1]);
	return 0;
}
