//Write a function power to raise a number m to power n. The function takes a double value for m and int value for n. Use default value for n to make the function to calculate squares when this argument is omitted.

#include<iostream>
#include<stack>
using namespace std;

double power(double a, int b=2)
{
	double x=1;
	for(int i=1;i<=b;i++)
		x=x*a;
	return x;
}

int main()
{
	int p;
	double n,r;
	bool check;
	cout<<"Enter number : ";
	cin>>n;
    cout<<"Do you want to give power?"<<endl;
    cin>>check;
	if(check==0)
    {
        cout<<"Enter power : ";
        cin>>p;
        r=power(n,p);
        cout<<"Result is "<<r<<endl;
    }
    else
    {
        r=power(n);
        cout<<"Result is "<<r<<endl;
    }
    return 0;
}

