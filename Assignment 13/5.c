// Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
int sum(int);
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);

  b =  sum(a);

  printf("%d",b);

    return 0;
}
int sum(int n)
{
    if( n == 0)
    return(0);

    return (n%10)+sum(n/10);
}

