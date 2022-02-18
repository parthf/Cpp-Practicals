//Imagine a publishing company that markets both book and audio cassette versions of its works.Create a class publication that stores the title (a string) and price (type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float). Each of these three classes should have a getdata() function to get its data from the user at the keyboard, and a putdata() function to display its data. Write a main() program to test the book and tape classes by creating instances of them, asking the user to fill in data with getdata(), and then displaying the data with putdata().
#include<iostream>
using namespace std;

class Publication
{
protected:
    char title[20];
    float price;
public:
    void getdata()
    {
        cout<<"Enter the Title:";
        cin>>title;
        cout<<"Enter Price of the book:";
        cin>>price;
    }
    void putdata()
    {
        cout<<"Title is "<<title<<endl;
        cout<<"Price is "<<price<<endl;
    }
};

class book:public Publication
{
protected:
    int pg_cnt;
public:
    void getdata()
    {
        Publication::getdata();
        cout<<"Enter Page count:";
        cin>>pg_cnt;
    }
    void putdata()
    {
        Publication::putdata();
        cout<<"Page count is "<<pg_cnt<<endl;
    }
};

class tape:public Publication
{
protected:
    float time;
public:
    void getdata()
    {
        Publication::getdata();
        cout<<"Enter Tape time:";
        cin>>time;
    }
    void putdata()
    {
        Publication::putdata();
        cout<<"Tape running time is "<<time<<endl;
    }
};

int main()
{
    book B;
    B.getdata();
    B.putdata();

    tape T;
    T.getdata();
    T.putdata();
    return 0;
}
