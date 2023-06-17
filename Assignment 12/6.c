// Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
void evenR(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    evenR(a);

    return 0;
}
void evenR(int n)
{
    if(n==0)
    return ;

    printf(" %d ",n);
    evenR(n-2);
}