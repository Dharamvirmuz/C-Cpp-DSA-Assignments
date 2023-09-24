//  Write a C++ program to calculate the volume of a cuboid.

#include<iostream>
using namespace std;
int main()
{
    int l,b,h;  // l = length, b = breadth, h = height

    cout<<"Enter Length of a cuboid:  ";
    cin>>l;
    cout<<"Enter Breadth of a cuboid:  ";
    cin>>b;
    cout<<"Enter Height of a cuboid:  ";
    cin>>h;

    int total;   // calculation of l*b*h

    total = l * b * h;

    cout<<"Cuboid of a Volume = "<< total ;

    return 0;
}