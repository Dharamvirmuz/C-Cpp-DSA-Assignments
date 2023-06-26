//Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>
int square(int);
int main()
{
    int a,b;

    printf("Enter a number: ");
    scanf("%d",&a);

  b =  square(a);

  printf("%d",b);

    return 0;
}
int square(int n)
{
    if( n == 0)
    return (0);

   
   return (n*n)+square(n-1);
     //   printf("%d",n);

}