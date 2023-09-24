// Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user

#include<stdio.h>
int main()
{
    int a[10],i;

    printf("Enter 10 Elements: ");
    for( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    int b = 0, c = 0;
    for( i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        b =   b + a[i];
        else 
        c = c + a[i];


    }

    printf("Even Numbers = %d \n and Odd Numbers = %d\n\n",b,c);
}



