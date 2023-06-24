// Write a recursive function to print octal of a given decimal number

#include<stdio.h>
int octal(int );
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);

   b = octal(a);

   printf("Octal value of "+a+" = ",b);

    return 0;
}

int octal(int n)
{
    if(n < 8)
    return n+"";
    // printf(n+"n",n);
     else{
  
   return octal( n / 8) + (n % 8);
   // printf(" %d ",n%8);

    }
  
}
