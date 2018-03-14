#include<stdio.h>
int main ()
{
  int n,r;
  scanf ("%d", &n);
  while (n != 0)
    {
	  n=n/10;
      r= n % 10;
      if (r% 2 != 0)
	{
	  printf ("%d\t", r);
	}
    }
 return 0;
}
