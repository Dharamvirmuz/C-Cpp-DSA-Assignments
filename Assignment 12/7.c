// Write a recursive function to print squares of first N natural numbers

#include<stdio.h>
int square(int);
int main()
{
    int a,b;

    printf("Enter a number: ");
    scanf("%d",&a);

    b = square(a);

    printf("Sum = %d ",b);

    return 0;
}
int square(int n)
{
    if(n==0)
    return ;

    return (n*(n+1)*(2*n+1))/6;

}
