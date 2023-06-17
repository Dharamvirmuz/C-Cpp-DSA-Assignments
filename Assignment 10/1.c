// Write a function to calculate the area of a circle. (TSRS) 

// TSRS

#include<stdio.h>
float area(float radius);

int main()
{
    float a,b;
    printf("Enter radius: ");
    scanf("%f",&a);

    b = area(a);
    printf("area of circle = %f",b);

    return 0;
}

float area(float radius)
{
    float a;
    a = 3.14 * radius * radius;
    return a;

}
