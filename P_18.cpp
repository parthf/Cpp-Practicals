//Write a program to create a class TEST with one int member. Define constructor, destructor and getter for the same. Define a function (outside class) find_square that takes object as an argument and returns square of int member of that object. Also define destructor.
#include<iostream>
#include<cmath>
using namespace std;
class TEST
{
private:
    int a;
public:
    TEST()
    {
        cout<<"Constructor called."<<endl;
    }
    ~TEST()
    {
        cout<<"Destructor called."<<endl;
    }
    int getA()
    {
        return a;
    }
    void setA(int A)
    {
        a=A;
    }
};
int find_square (TEST T1)
{
    int square;
    square=pow(2,T1.getA());
    return square;
}
int main()
{
    TEST T1;
    int a,b;
    cout<<"Enter value to get square "<<endl;
    cin>>a;
    T1.setA(a);
    b=find_square(T1);
    cout<<"Square is "<<b<<"."<<endl;
    return 0;
}
