//Write a program to create a class for book having title, price and publisher having 2 member functions getdetails() and setdetails().Also create the object of 2 different books.

#include<iostream>
using namespace std;

class book
{
private:
    string title;
    float price;
    string publisher;
public:
    void getdetails(string t,float p,string pu)
    {
        title=t;
        price=p;
        publisher=pu;
    }
    void setdetails();
};

void book :: setdetails()
{
    cout<<"Title of book is "<<title<<endl;
    cout<<"Price of book is "<<price<<endl;
    cout<<"Publisher of book is "<<publisher<<endl;
}

int main()
{
    string t,pu;
    float p;
    int book_no;
    cout<<"For how many books will you give data"<<endl;
    cin>>book_no;
    book b[book_no];
    for(int i=0;i<book_no;i++)
    {
        cout<<"Enter Title first then price and then publisher name:"<<endl;
        cin>>t>>p>>pu;
        b[i].getdetails(t,p,pu);
        b[i].setdetails();
    }
    return 0;
}
