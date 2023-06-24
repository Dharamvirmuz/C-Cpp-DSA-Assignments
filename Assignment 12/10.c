// Write a recursive function to print reverse of a given number

#include<stdio.h>
void reverse(int);
int main()
{
    int a,b,c,d;

    printf("Enter a number: ");
    scanf("%d",&a);
   

   reverse(a);

 // printf(" %d ",b);

    return 0;
}
void reverse(int n)
{
    if( n == 0 )
    return ;
   

    
     
    printf(" %d ",n);
  return  reverse(n - 1 * 1);  
   
}