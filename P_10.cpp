//Write a program that overloads absolute 3 functions namely absolute that return absolute values of int, floating point number and double.

#include<iostream>
#include<cmath>
using namespace std;

void absolute(int a)
{
    cout<<"Absolute value of entered int is "<<fabs(a)<<endl;
}

void absolute(float a)
{
    cout<<"Absolute value of entered float is "<<fabs(a)<<endl;
}

void absolute(double a)
{
    cout<<"Absolute value of entered double is "<<fabs(a)<<endl;
}

int main()
{
    int a;
    float b;
    double c;
    cout<<"Enter int value first then float value and then double value to convert it to absolute value"<<endl;
    cin>>a>>b>>c;
    absolute(a);
    absolute(b);
    absolute(c);
    return 0;
}
