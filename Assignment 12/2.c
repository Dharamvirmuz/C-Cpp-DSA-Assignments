// Write a recursive function to print first N natural numbers in reverse order

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
    if(n==0)
    return ;

    printf(" %d ",n);
    reverse(n-1);
    
}