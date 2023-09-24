//Write functions using function overloading to add two numbers having different data types

#include<iostream>
using namespace std;

class Addition
{
    public:
    double x,y;

    double add();

    Addition(double a, double b)
    {
        x = a;
        y = b;
    }
};

double Addition::add()
{
    return x + y;
}

int main()
{
    double a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;

    Addition Add_obj = Addition(a,b);

    double sum = Add_obj.add();

    cout<<"Addition = "<< sum <<endl;

    return 0;
}