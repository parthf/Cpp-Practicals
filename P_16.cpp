//Following are the class specifications:
//class A { int a;};
//class B { int b;};
//Using a friend function, calculate the max of two objects and display it.

#include<iostream>
using namespace std;

class B;
class A
{
private:
    int a;
public:
    friend int findmax(A,B);
    int getA()
    {
        return a;
    }
    void setA(int A)
    {
        a=A;
    }
};

class B
{
private:
    int b;
public:
    friend int findmax(A,B);
    int getB()
    {
        return b;
    }
    void setB(int B)
    {
        b=B;
    }
};

int findmax(A a1,B b1)
{
    if(a1.a>b1.b)
        return a1.a;
    else
        return b1.b;
}

int main()
{
    int m,n;
    A a1;
    B b1;
    cout<<"Enter value for m & n:"<<endl;
    cin>>m>>n;
    a1.setA(m);
    b1.setB(n);
    cout<<findmax(a1,b1)<<" is the max integer."<<endl;
}
