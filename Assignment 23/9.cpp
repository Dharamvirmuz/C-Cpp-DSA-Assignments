//  Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter value of A:  ";
    cin>>a;
    cout<<"Enter value of B:  ";
    cin>>b;

    if(a > b)
    cout<<"A is maximum";
    else if ( a < b)
    cout<<"B is maximum";
    else
    cout<<"Both are equal";

    return 0;

}