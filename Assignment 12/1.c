//     Write a recursive function to print first N natural numbers

#include<stdio.h>
void natural(int);
int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    natural(a);

    return 0;
}

void natural(int n)
{
    if(n==0)
    return ;

    natural(n-1);
    printf(" %d ",n);
}