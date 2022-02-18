/*Create a class called LIST with two pure virtual
function store() and retrieve().To store a value call
store and to retrieve call retrieve function. Derive
two classes stack and queue from it and override
store and retrieve.*/
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
class list
{
protected:
    int a[100];

public:
    virtual void store() = 0;
    virtual void retrieve() = 0;
};

class stack : public list
{
    int point;

public:
    stack() { point = -1; }
    void store()
    {
        if (point > 99)
        {
            cout << "\n\nNo space left in stack !";
            Sleep(2000);
        }
        else
        {
            point++;
            cout << "\n\nPosition " << point + 1 << "\n\nEnter value: ";
            cin >> a[point];
        }
    }
    void retrieve()
    {
        if (point < 0)
        {
            cout << "\n\nNo values left to retrieve !";
        }
        else
        {
            cout << "\n\nValue:" << a[point] << "\nRetrieved form position " << point + 1;
            point--;
        }
    }
};
class queue : public list
{
    int enter, exit;

public:
    queue()
    {
        enter = -1;
        exit = 0;
    }
    void store()
    {
        enter++;
        cout << "\n\n\nPosition " << enter + 1 << "\n\nEnter value: ";
        cin >> a[enter];
    }
    void retrieve()
    {
        int i;
        if (enter < 0)
        {
            cout << "\n\nNo values left to retrieve !";
        }
        else
        {

            cout << "\n\nValue: " << a[exit] << "\nRetrieved from position " << exit + 1;
            for (i = 0; i < enter; i++)
            {
                a[i] = a[i + 1];
            }
            enter = i - 1;
        }
    }
};

int main()
{
    int a,c;
    list *l;
    do
    {
        cout << "1) Stack   2) Queue   3) Exit\n\nInput: ";
        cin >> a;
        if(a==1)
        {
            stack s;
            l=&s;
        }
        else if(a==2)
        {
            queue q;
            l=&q;
        }
        else if(a==3)
        {
            exit(0);
        }

        do
        {
            cout << "\n\n\n1) Add value   2) Retrieve value   3) Exit\n\nInput: ";
            cin >> c;
            switch (c)
            {
            case 1:
                l->store();
                break;
            case 2:
                l->retrieve();
                break;
            case 3:
                break;
            default:
                cout << "\n\nInvalid input !";
            }
        } while (c != 3);

    } while (a != 3);
    return 0;
}
