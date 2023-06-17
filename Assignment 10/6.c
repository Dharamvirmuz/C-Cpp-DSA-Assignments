//  Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>
int factorial(int);
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);

    b = factorial(a);

    printf("Result = %d ",b);
    return 0;
}



int factorial(int a)
{
    int i, f = 1;

    for(i = 1; i <= a; i++)
    f = f * i;
    return f;
}
