#include <stdio.h>
int main()
{
    char s[20];
    int i, n, flag = 0;
    scanf("%s",&s[i]);
   n= strlen(s);
   for(i=0;i<n;i++)
{
        if(s[i]!=s[n-i-1])
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    if(flag==1)
    {
        printf(" not a palindrome");
    }    
    else {
        printf("palindrome");
    }
    return 0;
}
}
