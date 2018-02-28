#include<stdio.h>
#include<string.h>
int main()
{
char ch[50];
int n,c=0,i;
scanf("%s",&ch);
n=strlen(ch);
for(i=0;i<n;i++)
{
if(ch[i]=='0'||ch[i]=='1')
{
c++;
}
}
if(n==c)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
