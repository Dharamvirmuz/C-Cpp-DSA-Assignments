//  Write a C++ program to calculate the area of a circle


#include<iostream>
using namespace std;
int main()
{
    float a; // radius
    cout<<"Enter radius of a circle:  ";
    cin>>a;

    float b;

    b = 3.14*a*a;

    cout<<"Radius of Circle = "<< a <<endl;
    cout<<"Area of that Circle = "<< b ;

    return 0;
}