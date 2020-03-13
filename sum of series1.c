/*to find the sum of series 1^2+2^2+......+n^2*/
#include<stdio.h>
void main()
    {
      int n,sum=0;
      printf("\n Enter the value of n:");
      scanf("%d",&n);
      for(int i=0;i<n;i++)
         {
            sum+=i*i;
         }
      printf("\n sum =%d",sum);
    }  
