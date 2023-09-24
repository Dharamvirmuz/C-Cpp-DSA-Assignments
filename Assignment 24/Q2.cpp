// Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

class HighestNumber
{
    public:
    int n;

    int FindMaxDigit();

    HighestNumber(int a)
    {
       n = a;
       
    }
};

int HighestNumber ::FindMaxDigit()
{
    int max = -1;
    while(n!=0)
    {
    	int rem = n%10;
    	if(rem > max)
    	max = rem;
    	n = n/10;
	}
	cout<<"Max digit is "<<max<<endl;

}

int main()
{
    int c;

    cout<<"Enter a Number"<<endl;
    cin>>c;
    

    HighestNumber a = HighestNumber(c);

    a.FindMaxDigit();

    return 0;
}
