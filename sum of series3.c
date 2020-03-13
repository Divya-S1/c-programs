/* to find the sum of series 1/1!+2/2!+3/3!+....1/n!*/
#include<stdio.h>
int factorial(int);
void main()
    { 
      int i,n;
      float sum=0;
      printf("Enter value of n\n");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
         {
            sum=sum+(i/(float)factorial(i));
         }
      printf("The sum of %d terms of the series 1/N1 is %f\n",n,sum);
    }

     int factorial(int num)
         {
          if(num==0||num==1)
           return 1;
         else
           return num*factorial(num-1);
         }  
