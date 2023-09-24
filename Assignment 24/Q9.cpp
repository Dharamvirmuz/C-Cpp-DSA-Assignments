//  Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include <iostream>
using namespace std;

class Maximum
{
public:
    double x, y;

    void Check();

    Maximum(double a, double b)
    {
        x = a;
        y = b;
    }
};

void Maximum::Check()
{

    if (x > y)
        cout << "Maximum number is " << x << endl;
    else if (x < y)
        cout << "Maximum number is " << y << endl;
    else
        cout << "Both are equal";
}

int main()
{

    double a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;

    Maximum a1(a, b);

    a1.Check();

    return 0;
}