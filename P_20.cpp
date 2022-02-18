//Write a program to create a class TIME with members hours, minutes, and seconds. Read values from keyboard and add two TIME objects by passing objects to function and display result. Also define destructor.
#include<iostream>
using namespace std;
class TIME
{
private:
    int hour;
    int minute;
    int second;
public:
    TIME(){}
    TIME(int h,int m,int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    ~TIME(){}
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSecond()
    {
        return second;
    }
};
TIME add(TIME T1,TIME T2)
{
    int x,y,z;
    x=T1.getHour()+T2.getHour();
    y=T1.getMinute()+T2.getMinute();
    while(y>60)
    {
        x++;
        y=y-60;
    }
    z=T1.getSecond()+T2.getSecond();
    while(z>60)
    {
        y++;
        z=z-60;
    }
    TIME T3(x,y,z);
    return T3;
}
int main()
{
    int h,m,s;
    cout<<"Enter time in format of hour then minute and then second:"<<endl;
    cin>>h>>m>>s;
    TIME T1(h,m,s);
    cout<<"Enter time in format of hour then minute and then second:"<<endl;
    cin>>h>>m>>s;
    TIME T2(h,m,s);
    TIME T3=add(T1,T2);
    cout<<"Final Time is:"<<endl<<T3.getHour()<<":"<<T3.getMinute()<<":"<<T3.getSecond()<<endl;
    return 0;
}
