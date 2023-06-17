// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural(int, int);
int main()
{
    int a,b;
    printf("\n-----Not enter 0----- \n\n\n");
    printf("Enter starting number: ");
    scanf("%d",&a);
    printf("Enter ending numbers: ");
    scanf("%d",&b);
    natural(a,b);
    return 0;

}
void natural(int a, int b)
{
     int i;
    for(i = a; i <= b; i++)
    {
        printf("%d\n",i);
        
    }
    
}
