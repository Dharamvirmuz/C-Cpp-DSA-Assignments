//  Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;

class Addition
{
    public:
    int x,y,z;

    int add();

    Addition(int a, int b, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    }
};
int Addition :: add()
{
    return x + y + z;
}

int main()
{
    int a1,a2,a3;

    cout<<"Enter two numbers:"<<endl;
    cin>>a1>>a2;

    Addition a = Addition(a1,a2);

    int  total_1;

    total_1 = a.add();

    cout<<"Addition of "<< a.x << " and "<< a. y <<" is "<< total_1<< endl;

    cout<<"------------------"<<endl;

    // int a1,a2,a3;

    cout<<"Enter Three numbers:"<<endl;
    cin>>a1>>a2>>a3;

    Addition b = Addition(a1,a2,a3);

    int total_2;

    total_2 = b.add();

    cout<<"Addition of "<< b.x << " and "<< b. y << " and "<< b. z <<" is "<<  total_2  << endl;

    return 0;

}