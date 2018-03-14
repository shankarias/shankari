#include<stdio.h>
int main()
{
char ch[20];
int i,len;
scanf("%s",ch);
len=strlen(ch);
i=len/2;
if(len%2==0)
{
ch[i]='*';
ch[i-1]='*';
printf("%s",ch);
}
else
{
ch[i]='*';
printf("%s",ch);
}
return 0;
}
