//Design three classes STUDENT, EXAM and RESULT. The STUDENT class has data members such as rollno, name. EXAM is created by inheriting STUDENT. EXAM class adds data members representing the marks scored in six subjects. Derive RESULT from EXAM and has its own data members such as totalmarks.Write a program to model this relationship.
#include<iostream>
using namespace std;

class STUDENT
{
protected:
    int roll_no;
    char name[50];
public:
    void getdata()
    {
        cout<<"Enter Roll No. & Name:"<<endl;
        cin>>roll_no>>name;
    }
    void printdata()
    {
        cout<<"Roll no. of "<<name<<" is "<<roll_no<<endl;
    }
};

class EXAM:public STUDENT
{
protected:
    int marks[6];
public:
    void getdata()
    {
        STUDENT::getdata();
        cout<<"Enter marks:";
        for(int i=1;i<6;i++)
        {
            cin>>marks[i];
        }
    }
    void printdata()
    {
        STUDENT::printdata();
        cout<<"Marks You've entered"<<endl;
        for(int i=1;i<6;i++)
        {
            cout<<marks[i]<<endl;
        }
    }
};

class RESULT:public EXAM
{
protected:
    int total=0;
public:
    void getdata()
    {
        EXAM::getdata();
        for(int i=1;i<6;i++)
        {
            total=total+marks[i];
        }
    }
    void printdata()
    {
        EXAM::printdata();
        cout<<"Total of "<<name<<" is "<<total<<endl;
    }
};

int main()
{
    RESULT R;
    R.getdata();
    R.printdata();
    return 0;
}
