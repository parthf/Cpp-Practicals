//Write a program to perform addition of two complex numbers using constructor overloading. Define add function outside the class that returns the addition.Also define destructor.
#include<iostream>
using namespace std;
class COMPLEX
{
private:
    int rn,in;
public:
    COMPLEX()
    {
        rn=4;
        in=5;
    }
    COMPLEX(int in)
    {
        rn=4;
        this->in=in;
    }
    COMPLEX(int rn,int in)
    {
        this->rn=rn;
        this->in=in;
    }
    ~COMPLEX(){}
    int getIn()
    {
        return in;
    }
    int getRn()
    {
        return rn;
    }
};
COMPLEX add(COMPLEX C1,COMPLEX C2)
{
    int in,rn;
    rn=C1.getRn()+C2.getRn();
    in=C1.getIn()+C2.getIn();
    COMPLEX res(rn,in);
    return res;
}
int main()
{
    COMPLEX C1,C4,C5;
    int rn,in,z;
    cout<<"Enter imaginary part for second object:"<<endl;
    cin>>in;
    COMPLEX C2(in);
    cout<<"Enter real and imaginary part for third object:"<<endl;
    cin>>rn>>in;
    COMPLEX C3(rn,in);
    C4=add(C1,C2);
    C5=add(C1,C3);
    cout<<"Addition is:"<<endl<<C4.getRn()<<"+"<<C4.getIn()<<"i"<<endl;
    cout<<"Addition is:"<<endl<<C5.getRn()<<"+"<<C5.getIn()<<"i"<<endl;
    return 0;
}
