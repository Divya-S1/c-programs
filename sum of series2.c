/*/to find the sum of 1+1/2+1/3+.....1/n*/
#include <stdio.h>
void main()
    {
      int number, sum = 0, i;
      printf("\n enter the value of n: ");
      scanf("%lf", &number);
      for (i = 1; i <= number; i++)
         {
            sum = sum + (1 / i);
         
        if (i == 1)
            printf("\n 1 +");
        else if (i == number)
            printf(" (1 / %lf)", i);
        else
            printf(" (1 / %lf) + ", i);
         }
      printf("\n The sum of the given series is %.2lf", sum);
    }
