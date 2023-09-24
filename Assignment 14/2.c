// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10],i;

    printf("Enter 10 elements: ");

    for( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum  = 0;

    for( i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }

    sum = sum/10;
    
    printf("Average number = %d",sum);
}
