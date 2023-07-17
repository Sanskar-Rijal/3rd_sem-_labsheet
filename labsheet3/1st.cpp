/*Write a program that has a class to represent time.
The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to 
values passed as arguments.
The class should have a member function to add time objects and return the result as a time object.
There should be functions to display time in 12-hour and 24-hour format.*/
#include<iostream>
using namespace std;
class timett
{
    int hour;
    int minute;
    int second;
    public:
    timett()
    {
        hour=0;
        minute=0;
        second=0;
    }
    timett(int hour,int minute,int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
        timett add(timett& a, timett &b)
    {
        timett c;
        c.hour=a.hour+b.hour;
        c.minute=a.minute+b.minute;
        c.second=a.second+b.second;
        while(c.second>=60)
        {
            c.second-=60;
            c.minute++;
        }
        while(c.minute>=60)
        {
            c.minute-=60;
            c.hour++;
        }
        return c;
    }
    void displayin12();
    void displayin24();
};
void timett::displayin12()
{
    if(hour>12)
    {
        hour-=12;
        cout<<"the time in 12 hour format is"<<endl;
        cout<<hour<<":"<<minute<<":"<<second<<"am"<<endl;
    }
}
void timett::displayin24()
{
        cout<<"the time in 24 hour format is"<<endl;
        cout<<hour<<":"<<minute<<":"<<second<<"pm"<<endl;
}
int main()
{
    int hour,minute,second;
    cout<<"enter time in hour,minute and second";
    cin>>hour>>minute>>second;
    timett t1(hour,minute,second);
     cout<<"enter time in hour,minute and second";
    cin>>hour>>minute>>second;
    timett t2(hour,minute,second);
    timett t3=t3.add(t1,t2);
    t3.displayin24();
    t3.displayin12();
    return 0;
}