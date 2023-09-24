// Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;

class PrimeNumber
{
    public:
    int n;

    void checkPrimeNumber()
    {
        int flag = 0;
        for(int i = 2; i <= n / 2; i++)
        {
            if( n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        cout<<"The number is Prime"<<endl;
        else
        cout<<"The number is not Prime";
    }
};

int main()
{
    PrimeNumber a;

    cout<<"Enter a number:"<<endl;
    cin>>a.n;

    a.checkPrimeNumber();

    return 0;
}