#include<stdio.h>
int main()
{
    int count=0;
    char a[100];
    scanf("%[^\n]",a);
    for(int i=0;a[i]!=0;i++)
    {
    	if(a[i]=='.')
            count++;    
    }
    printf("%d\n",count+1);
    return 0;
}
