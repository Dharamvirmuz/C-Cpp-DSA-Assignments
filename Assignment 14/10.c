// Write a program in C to copy the elements of one array into another array.Take array values from the user

#include<stdio.h>
int main()
{
    int a[10] , i , b[10], j;

    printf("Enter 10 Elements: ");

    for( i = 0, j = 0; i < 10, j < 10; i++, j++)
    {
        scanf("%d",&a[i]);
       a[i] = a[j];
    }
    
    for( j = 0; j < 10; j++)
    {
        printf("%d\n",b[j]);
    }

   return 0;
}