// Write a recursive function to print first N even natural numbers

#include<stdio.h>
void even(int);
int main()
{
    int a;
    printf("Enter a even number: ");
    scanf("%d",&a);

    even(a);

    return 0;
}

void even(int n)
{
    if (n == 0)
    return ;

    even(n-2);
    printf(" %d ",n);
}
