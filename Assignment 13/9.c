//  Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
int count(int);
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);

    b = count(a);

    printf("%d",b);

    return 0;
}
int count(int n)
{
    static int c = 0;

    if( n == 0)
    return (c);

    else
    c++;
    return count(n/10);
}
