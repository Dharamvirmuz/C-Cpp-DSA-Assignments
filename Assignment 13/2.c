// Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>
int odd(int);
int main()
{
    int a,b;

    printf("Enter a number: ");
    scanf("%d",&a);

    b = odd(a);

    printf(" %d ",b);

    return 0;
}
int odd(int n)
{
    if( n == 1)
    return (1);

    return n+odd( n - 2);
}