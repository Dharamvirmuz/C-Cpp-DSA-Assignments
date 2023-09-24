// Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10],i;

    printf("Enter a number: ");

    for( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int greatest = a[0];

    for( i =0; i < 10; i++)
    {
        if( greatest < a[i])
        greatest = a[i];
    }

    printf("Greatest Number = %d",greatest);
}