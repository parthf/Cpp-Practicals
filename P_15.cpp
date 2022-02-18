//Demonstrate the use of static variables and static function in a class by using it to count the number of objects created in the program, having a static function to display the count.

#include<iostream>
using namespace std;

class Book
{
private:
    string title;
    float price;
    string publisher;
    static int count;
public:
    string getTitle()
    {
        return title;
    }
    void setTitle(string t)
    {
        title=t;
        count++;
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
    static int getCount()
    {
        return count;
    }
};

int Book::count=0;

int main()
{
    Book b1,b2;
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

    cout<<"Total entered books are "<<Book::getCount()<<endl;

    return 0;
}

