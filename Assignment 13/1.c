// Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>
int natural(int );
int main()
{
    int a,b;

    printf("Enter a number: ");
    scanf("%d",&a);

   b = natural(a);

   printf("%d",b);


    return 0;
}
int natural(int n)
{
    if(n  == 1)
    return (1);
 
   
    return n+natural(n-1);
  
   
    
}