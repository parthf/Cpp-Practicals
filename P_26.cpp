#include<iostream>
using namespace std;

class person
{
    int age;
public:
    friend void swapData(person *,person *);
    void setAge()
    {
        cout<<"Enter Age: ";
        cin>>age;
    }
    void printAge()
    {
        cout<<endl<<"Age is "<<age<<endl;
    }
};

void swapData(person *p1, person *p2)
{
    int age;
    age=p1->age;
    p1->age=p2->age;
    p2->age=age;
}

int main()
{
    person p1,p2;
    person *ptr1=&p1;
    person *ptr2=&p2;
    ptr1->setAge();
    ptr2->setAge();
    swapData(ptr1,ptr2);
    cout<<endl<<"After swapping data"<<endl;
    ptr1->printAge();
    ptr2->printAge();
    return 0;
}
