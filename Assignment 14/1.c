//Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user

#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 Elements: ");

    for( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    int add = 0;

    for( i = 0; i < 10; i++)
    {
         add =  add + a[i];
    }
    printf("Addition = %d",add);
}

