#include<stdio.h>
void main()
   {
    char Operator;
    float num1,num2,result=0;
    printf("\n Enter an Operator(+,-,*,/):");
    scanf("%c",&Operator);
    printf("\n Enter the values for two operands:num1 and num2:");
    scanf("%f%f",&num1,&num2);
    switch(Operator)
    { 
         case '+':
                 result =num1+num2;
                 break;
         case '-':
                 result =num1-num2;
                 break;
         case '*':
                 result =num1*num2;
                 break;
         case '/':
                 result =num1/num2;
                 break;
         default case:
                 printf("\n Entered an Invalid Operator");
                 break;
    } 
    printf("\n the result of %.2f%c%.2f=%.2f",num1,Operator,num2,result);
    return 0;
   } 
    
