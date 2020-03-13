/*to generate Fibonacci Series*/
#include<stdio.h>
void main()
    {
      int n1=0,n2=1,n3,i,number;
      printf("Enter the limit to generate the Fibonacci Series:");
      scanf("%d",&number);
      printf("\n first %d terms of Fibonacci Series are:",n);
      for(i=0;i<n;i++)
         {
           if(i<=1)
           n3=i;
           else
             {
               n3=n1+n2;
               n1=n2;
               n2=n3;
             }  
           printf("%d\t",n3);
         }
    }     
