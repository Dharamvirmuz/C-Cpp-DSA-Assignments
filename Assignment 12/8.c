 // Write a recursive function to print binary of a given decimal number

#include<stdio.h>
void binary(int);
int main()
{
    int a;

    printf("Enter any number: ");
    scanf("%d",&a);

    binary(a);

    return 0;
}

void binary(int n)
{
    
   if( n == 1)
   printf("1");
   
   else{ 
    binary( n / 2);        
    printf(" %d ",n%2);
    }
}


