//  Define a function to calculate x raised to the power y

#include<iostream>
using namespace std;
#include<math.h>

class Power
{
    public:
    double x,y;

    double CalculatePower();

    Power(double a, double b)
    {
        x = a;
        y = b;
    }
};

double Power::CalculatePower()
{
    double result = pow(x,y);

    cout<<"Result = "<< result <<endl;
}

int main()
{
    double c,d;

    cout<<"Enter Number "<<endl;
    cin>>c;
    cout<<"Enter Power "<<endl;
    cin>>d;

    Power p = Power(c,d);

    p.CalculatePower();

    return 0;
}
