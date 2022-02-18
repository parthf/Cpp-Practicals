//Write a program to demonstrate the use of inline functions by creating 2 inline functions. One inline function for multiplication operation and other inline function for demonstrating division operation.

#include <iostream>
using namespace std;
inline float division (float a, float b)
{
    return a/b;
}
inline float product(float a, float b)
{
    return a*b;
}
int main()
{
    float a, b,c,d;
    cout<<"Enter value of a and b: "<<endl;// printf"sfcwfcvsv";
    cin>>a>>b; // scanf
    c=division(a,b);
    cout<<"DIVISION of a and b is "<<c<<endl;
    d=product(a,b);
    cout<<"product of a and b is "<<d<<endl<<"division of a and b is "<<c<<endl;
    return 0;
}
