// Write a recursive function to calculate sum of first N even natural numbers

#include<stdio.h>
int even(int);
int main()
{
    int a,b;

    printf("Enter a even number: ");
    scanf("%d",&a);

    b = even(a);

    printf("%d",b);

    return 0;
}
int even(int n)
{
    if( n == 0)
    return (0);

    return n+even(n-2);
}