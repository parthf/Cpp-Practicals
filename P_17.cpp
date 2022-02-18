//Write a program to create a class for defining COMPLEX numbers and overload three set functions (setters). The first set function which takes no argument is used to create objects which are not initialized, second which takes one argument is used to initialize real and imaginary parts to equal values and third which takes two argument is used to initialized real and imaginary to two different values.Define a display function that prints the complex number.
#include<iostream>
#include<stdlib.h>
using namespace std;


class COMPLEX
{
    int real,image;

public:
    void setReal()
    {
        COMPLEX c5;
    }
    void setComplex(int r)
    {
        real=r;
        image=r;
    }
    void setComplex(int r ,int i)
    {
        real=r;
        image=i;
    }
    void setComplex()
    {
        real=0;
        image=0;
    }
    void display()
    {
        cout << "The complex number is: "<< real << " + " << image << "i" <<endl;
    }

};

int main()
{
    int rn,in;

    COMPLEX C1,C2,C3;
    cout<<"Enter the real part : ";
    cin>>rn;
    cout<<endl<<"Enter the imaginary part : ";
    cin>>in;
    C1.setComplex(rn,in);
    C2.setComplex(rn);
    C3.setComplex();

    C1.display();
    C2.display();
    C3.display();
}
