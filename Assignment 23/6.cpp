//  Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    float d,e;
    cout<<"Enter Three numbers:"<<endl;
    cin>>a>>b>>c;
    
    d = a + b + c;

    e = d / 3;

    cout<<"Average of "<< a << " and "<< b << " and "<< c << " is " << e ;

    return 0;



}