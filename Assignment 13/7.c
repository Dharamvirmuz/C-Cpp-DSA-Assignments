// Write a recursive function to calculate HCF of two numbers

#include<stdio.h>
int hcf(int, int);
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Enter another number: ");
    scanf("%d",&b);

    c = hcf(a,b);

    printf("HCF of %d and %d is %d",a,b,c);

    return 0;
}
int hcf(int a, int b)
{
    if( a == b)
    return(a);

    if(a%b==0)
    return(b);

    if(b%a==0)
    return(a);

    if(a>b)
    return hcf(a%b,b);

    else
    return hcf(a,b%a);
}

