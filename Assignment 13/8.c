// Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>
int fib(int);
int main()
{
    int a,b;

    printf("Enter a number: ");
    scanf("%d",&a);

    b = fib(a);

    printf("%d",b);

    return 0;
}
int fib(int n)
{
    if(n==1 || n==2)
    return (1);

    return fib(n-1) + fib(n - 2);
}

