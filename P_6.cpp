//Write a program to check whether given number is prime or not using UDF.

#include<iostream>

using namespace std;
bool checkPrime(int);
bool isPrime;
int main()
{
    int n=0;
    //bool isPrime;
    cout<<"Enter any no.";
    cin>>n;
    isPrime=checkPrime(n);
    if(isPrime==0)
        cout<<"Entered Number is Prime."<<endl;
    else
        cout<<"Entered Number is not Prime."<<endl;

    return 0;
}

bool checkPrime(int n)
{
    //bool isPrime;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
            isPrime=1;
        else
            isPrime=0;
    }
    return isPrime;
}
