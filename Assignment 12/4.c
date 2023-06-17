// Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
void reverse(int);
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    reverse(a);

    return 0;
}
void reverse(int n)
{
    if(n==1 )
    return ;

    printf(" %d ",n);
    reverse(n-2);
    
}