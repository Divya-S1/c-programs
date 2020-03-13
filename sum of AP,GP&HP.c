/*to find the sum of AP,GP &HP series*/
#include<stdio.h>
#include<math.h>
void main()
    {
      flaot a,d,n,r,sum=0,i;
      int ch;
      printf("choose the type of series \n1.Arithmetic Progression(AP)\n2.Geometric Progression(GP)\n3.Harmonic Progression(HP)\n");
      scanf("%d",&ch);
      switch(ch)
         {
            case1:
            printf("enter the first term and common difference and number of terms of the AP \n");
            scanf(""%f%f%f",&a,&d,&n);
            for(i=0;i<n;i++)
               {
                 sum=sum+(a+i*d);
               }
            printf("the sum of %.1f terms of the AP is =%f\n",n,sum);
            break;
            
            case2:
            printf("enter the first term and common ratio and number of terms of the GP \n");
            scanf(""%f%f%f",&a,&r,&n);
            if(r<1)
              sum=(a*(1-pow(r,n))/(1-r));
            else
              sum=(a*(pow(r,n)-1)/(r-1));
              printf("sum of %f terms of GP is= %f",n,sum);
              break;
            case3:
            printf("enter the value ofa,d and n in 1/(a+nd)\n");
            scanf(""%f%f%f",&a,&d,&n);
            for(i=0;i<n;i++)
                {
                  sum=sum+(1/(a+i*d));
                }
             printf("sum of %f termsof the HP is %f\n",n,sum);
             break;
           default case:
           printf("invalid choice\n");
           break;
         }    
   }      
