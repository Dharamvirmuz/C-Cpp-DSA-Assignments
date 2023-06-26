// Write a recursive function to calculate factorial of a given number

#include<stdio.h>
int fact(int);
int main()
{
    int a,b;

    printf("Enter a number: ");
    scanf("%d",&a);

    b = fact(a);

    printf("%d",b);

    return 0;

}

int fact(int n)
{
    if( n == 1)
    return (1);

    return n*fact(n-1);
}
