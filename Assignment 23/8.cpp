//  Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter Two numbers:"<<endl;
    cout<<"Enter the value of A:  ";
    cin>>a;
    cout<<"Enter the value of B:  ";
    cin>>b;

    cout<<"Before Swaping "<<" a = " << a <<" and " << " b = " << b <<endl;

    a = a + b;
    b = a - b;
    a = a - b;
    

    cout<<"After Swaping "<<" a = " << a <<" and " << " b = " << b <<endl;


    return 0;

}