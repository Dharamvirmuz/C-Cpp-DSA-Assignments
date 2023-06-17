// Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)


// not complete


#include<stdio.h>
int check(int);
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b = check(a);

    printf("Result = %d",b);
    return 0;
}
int check(int a)
{
    if(a % 2 == 0)
    printf("Even number");
    else
    printf("Odd number");
    // return 1;
    // return 0;
}