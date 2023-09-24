//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std;

class Area
{
    public:
    int x,y;

    int Circle();
    int Rectangle();
    int Triangle();

    Area(int a)
    {
        x = a;
    
    }

    Area(int a, int b)
    {
        x = a;
        y = b;
    }
};

int Area ::Circle()
{
    return 3.14*x*x;
}

int Area::Rectangle()
{
    return x * y;
}

int Area::Triangle()
{
   return x*y;
}

int main()
{
    cout<<"------------------------"<<endl;

    int c,d;
    cout<<"Enter Radius of circle"<<endl;
    cin>>c;

    Area a = Area(c);

    int c1 = a.Circle();  // c1 stands for circle

    cout<<"Area of Circle = "<< c1 <<endl;

    cout<<"------------------------"<<endl;

    cout<<"Enter Length of Rectangle"<<endl;
    cin>>c;
    cout<<"Enter Width of Rectangle"<<endl;
    cin>>d;

    Area b = Area(c,d);

    int r1 = b.Rectangle();  // r1 stands for rectangle

    cout<<"Area of Rectangle = "<< r1 <<endl;

    cout<<"------------------------"<<endl;

    cout<<"Enter base of Triangle"<<endl;
    cin>>c;
    cout<<"Enter height of Triangle"<<endl;
    cin>>d;

   // Area c = Area(c,d);

    int t1 = b.Triangle();  // t1 stands for triangle

    cout<<"Area of Triangle = "<< t1 <<endl;


    return 0;

    
}