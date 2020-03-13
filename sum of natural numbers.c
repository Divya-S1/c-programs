/*to find the sum of N natiral numbers*/
#include <stdio.h>
int main()
{
    int n, count, sum = 0;

    printf("\n Enter the number of natural numbers(n): ");
    scanf("%d",&n);

    for(count=1; count <= n; count++)
    {
        sum = sum + count;
    }

    printf("Sum of first %d natural numbers is: %d",n, sum);

    return 0;
}
