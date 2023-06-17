// Write a recursive function to print first N odd natural numbers



#include<stdio.h>
void natural(int);
int main()
{
    int a;
   

    printf("Enter a number: ");
    scanf("%d",&a);

    natural(a);

    return 0;
}

void natural(int n)
{
    if(n==1)
    return ;

    natural(n-2);
    printf(" %d ",n);

}


// #include<stdio.h>
// int odd(int num1, int num2)
// {
//    if(num1>num2)
//     return ;
//     printf(" %d ",num1);
// return odd(num1+2,num2);
// }
// int main()
// {
//     int num1=1,num2;
//     printf("Enter your Limit:");
//     scanf("%d",&num2);
//     printf("All odd number given range are:\n\n");
//     odd(num1,num2);
// }