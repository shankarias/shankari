#include <stdio.h>
int main() 
{
 int a,i,b=0;
 scanf("%d",&a);
 for(i=0;i<=a;i++)
 {
 if(a%2==0)
 {
 	b++;
 	break;
 }
 }
 if(b==2)
 {
 	printf("prime");
 	
 }
 else
 {
 	printf("nonprime");
 }
	return 0;
}
