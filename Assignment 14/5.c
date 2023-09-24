// Write a program to find the smallest number stored in an array of size 10. Take array values from the user

#include<stdio.h>
int main()
{
    int a[10],i;

    printf("Enter 10 Element: ");

    for( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int smallest = a[i];

    for( i = 0; i < 10; i++)
    {
        if( smallest > a[i])
        smallest = a[i];
    }

    printf("Smallest number = %d",smallest);
}