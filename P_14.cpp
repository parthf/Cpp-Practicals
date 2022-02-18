//Write a program to find the maximum price of 2 books and return that book as object. Use object as function argument.

#include<iostream>
using namespace std;

class Book
{
private:
    string title;
    float price;
    string publisher;
public:
    string getTitle()
    {
        return title;
    }
    void setTitle(string t)
    {
        title=t;
    }
    float getPrice()
    {
        return price;
    }
    void setPrice(float p)
    {
        price=p;
    }
    string getPublisher()
    {
        return publisher;
    }
    void setPublisher(string pu)
    {
        publisher=pu;
    }
};

Book maxvalue(Book b1,Book b2)
{
    Book temp;
    if(b1.getPrice()>b2.getPrice())
        temp=b1;
    else
        temp=b2;
    return temp;
}

int main()
{
    Book b1,b2,temp;
    string title,publisher;
    float price;
    cout<<"Enter data for first book like title,price and publisher: "<<endl;
    cin>>title>>price>>publisher;
    b1.setTitle(title);
    b1.setPrice(price);
    b1.setPublisher(publisher);
    cout<<"Dear user you've entered following data: "<<endl;
    cout<<"Title of book is "<<b1.getTitle()<<endl;
    cout<<"Price of book is "<<b1.getPrice()<<endl;
    cout<<"Publisher of book is "<<b1.getPublisher()<<endl;

    cout<<"Enter data for second book like title,price and publisher: "<<endl;
    cin>>title>>price>>publisher;
    b2.setTitle(title);
    b2.setPrice(price);
    b2.setPublisher(publisher);
    cout<<"Dear user you've entered following data: "<<endl;
    cout<<"Title of book is "<<b2.getTitle()<<endl;
    cout<<"Price of book is "<<b2.getPrice()<<endl;
    cout<<"Publisher of book is "<<b2.getPublisher()<<endl;

    temp=maxvalue(b1,b2);
    cout<<temp.getTitle()<<" is having maximum price."<<endl;

    return 0;
}
