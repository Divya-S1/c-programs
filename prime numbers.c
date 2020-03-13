/*to find prime numbers in a given range*/
#include <stdio.h>
void main()
    {
       int num1, num2, flag_var, i, j;
       printf("Enter the range of numbers:");
       scanf("%d %d", &num1, &num2);
       printf("Prime numbers from %d and %d are:\n", num1, num2);
       for(int i=num1;i<=num2;i++)
          {
              flag_var=0;
              for(j=2; j<=i/2;j++)
                 {
                   if(i%j==0)
                      {
                         flag_var=1;
                         break;
                      }
                 }
       if(flag_var==0 &&i!=1)
                    printf("%d\n",i);
          }
    }
