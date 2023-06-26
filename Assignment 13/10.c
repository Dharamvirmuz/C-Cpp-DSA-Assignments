// Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>

int check(int x, int y)
{
    if(y == 0){
        return (1);
    }
   

    return x*check(x,y-1);
}
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Enter its power: ");
    scanf("%d",&b);

    c = check(a,b);

    printf("Ans = %d",c);

    return 0;
}
