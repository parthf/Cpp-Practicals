#include<iostream>
#include<stdlib.h>
using namespace std;

class SHAPE
{
protected:
    double length,height;
public:
    virtual void getdata(){}
    virtual void display(){}
};

class TRIANGLE:public SHAPE
{
private:
    float a;
public:
    void getdata()
    {
        cout<<"Please enter base length of triangle:";
        cin>>length;
        cout<<"Please enter height of triangle:";
        cin>>height;
        a=0.5*length*height;
    }
    void display()
    {
        cout<<"Area of triangle is "<<a<<"."<<endl;
    }
};

class RECTANGLE:public SHAPE
{
private:
    float a;
public:
    void getdata()
    {
        cout<<"Please enter length of rectangle:";
        cin>>length;
        cout<<"Please enter width of rectangle:";
        cin>>height;
        a=length*height;
    }
    void display()
    {
        cout<<"Area of rectangle is "<<a<<"."<<endl;
    }
};

int main()
{
    char ch;
    string name;
    SHAPE *s;
    cout<<"Please enter your name:";
    cin>>name;
    do
    {
        cout<<"For which shape you want to proceed?"<<endl;
        cout<<"Enter t for triangle and r for rectangle:";
        cin>>ch;
        if(ch=='t'||ch=='T')
        {
            s=new TRIANGLE;
            cout<<"....Enter the details for triangle...."<<endl;
        }
        else if(ch=='r'||ch=='R')
        {
            s=new RECTANGLE;
            cout<<"....Enter the details for rectangle...."<<endl;
        }
        else
            cout<<"....Please enter valid choice....";
        s->getdata();
        system("cls");
        cout<<"Hello "<<name<<"."<<endl<<"Welcome to area founder."<<endl;
        s->display();
        cout<<"Do you want to enter another detail?"<<endl;
        cout<<"Enter y or n:";
        cin>>ch;
    }
    while(ch=='y'||ch=='Y');
    return 0;
}
