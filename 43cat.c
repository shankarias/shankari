#include<stdio.h>
#include<string.h>
int main()
{
char s1[15],s2[15];
int i=0,j=0;
scanf("%s",&s1[i]);
scanf("%s",&s2[i]);
while(s1[i]!='\0')
i++;
while(s2[j]!='\0')
{
s1[i]=s2[j];
j++;
i++;
}
s1[i]='\0';
printf("%s",s1);
return 0;
}
