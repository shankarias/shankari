#include <stdio.h>

int main()
{
	int a[15];
 int i,j,t,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
 	for(j=i+1;j<n;j++)
 	{
 if(a[i]>a[j])
 {
 
 	t=a[i];
 	a[i]=a[j];
 	a[j]=t;
 }
 	}
 }
 printf("%d",a[n-1]);
 return 0;
}
