/*to find HCF of a given number*/
#include <stdio.h>
void main()  
   {  
      int i, n1, n2,min, hcf=1;  
      printf("Enter two numbers:\n");
      scanf("%d%d",&n1,&n2);
      for(i=1; i<=min; i++)  
         {  
 /*if i is a factor of both*/
            if(n1%i==0 && n2%i==0)  
               {  
                 hcf = i;  
               }  
         }  
       printf("HCF of %d and %d is : %d\n", n1, n2, hcf);  
    }   
