/*to calculate the value of nCr & nPr*/
#include <stdio.h>
int factorial(int a);
void main()
    {
     int n,r;
     float npr,ncr;
     printf("\n Enter the value of n and r:");
     scanf("%d%d",&n,&r);
     ncr = (float)factorial(n)/(factorial(r)*factorial(n-r));
     npr = (float)factorial(n)/(factorial(n-r));
     printf("%dC%d = %ld\n", n, r, ncr);
     printf("%dP%d = %ld\n", n, r, npr);
    }
int factorial(int a)
    {
      if (a==0||a==1)
      return 1;
      else
      return a*factorial(a-1);
    } 
