/*to print the factorial of a given number*/
#include <stdio.h>
void main()
   {
      int i, n, f = 1;
      printf("Enter a number to calculate its factorial\n");
      scanf("%d", &n);
      for (i = 1; i <= n; i++)
         {
           f = f * i;
         }  
      printf("Factorial of %d = %d\n", n, f);
   }

