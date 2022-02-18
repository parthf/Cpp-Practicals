#include<iostream>
using namespace std;

class B;
class A
{
    int a;
public:
    friend int findmax(A *,B *);
    void setA()
    {
        cout<<"Enter value of a:";
        cin>>a;
    }
};

class B
{
    int b;
public:
    friend int findmax(A *,B *);
    void setB()
    {
        cout<<"Enter value of b:";
        cin>>b;
    }
};

int findmax(A *p1,B *p2)
{
    if(p1->a>p2->b)
        return p1->a;
    else
        return p2->b;
}

int main()
{
    A a1;
    B b1;
    A *ptr1=&a1;
    B *ptr2=&b1;
    ptr1->setA();
    ptr2->setB();
    cout<<"Maximum number is "<<findmax(ptr1,ptr2);
    return 0;
}
