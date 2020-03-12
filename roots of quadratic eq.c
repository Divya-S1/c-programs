#include<stdio.h>
#include<math.h>
void main ()
{
  float a,b,c,root1,root2,real,imaginary,discriminant;
  printf("Enter values of a,b,c of the quadratic equation (ax^2+bx+c):\n");
  scanf("%f%f%f",&a,&b,&c);
  discriminant=(b*b)-(4*a*c);
  if (discriminant > 0)
  {
    root1 = (-b+sqrt(discriminant))/(2*a);
    root2 = (-b-sqrt(discriminant))/(2*a);
    printf("two distinct and real roots exists:%.2f,%.2f",root1,root2);
  }
  else if(discriminant <0)
  {
    real=-b/(2*a);
    imaginary=sqrt(-discriminant)/(2*a);
    printf("two distinct complex roots exists:%.2f+%.2fi and %.2f-%.2fi",root1,imaginary,root2,imaginary);
  }
  else if(discriminant ==0)
  {
    root1=root2= -b/(2*a);
    printf("two equal and real roots exists:%.2f and %.2f",root1,root2);
  }
  return 0;
} 
    
    
