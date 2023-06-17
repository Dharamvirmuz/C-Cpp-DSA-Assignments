// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simple(float, float, float);
int main()
{
    float p,r,t,interest;
    printf("Enter Principal Amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter Time period: ");
    scanf("%f",&t);

    interest = simple(p,r,t);
    printf("Interest amount = %f",interest);

    return 0;

}
float simple(float p, float r, float t)
{
    float total;
    total = (p*r*t)/100;
    return total;

}
