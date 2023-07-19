// Write a program that displays the current monthly salary of chief executive officer,
// information officer, and system analyst, programmer that has been increased by 9, 10, 12,
// and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
// Chief executive officer Rs. 35000/m
// Information officer Rs. 25000/m
// System analyst Rs. 24000/m
// Programmer Rs. 18000/m
// Make a function that takes two arguments; one salary and the other increment.
// Use proper default argument.
#include<iostream>
using namespace std;
float new_sal(float salary,float inc=10);
int main()
{
    float  chief_ex_officer=35000;
    float info_officer=25000;
    float sys_analyst=24000;
    float programmer=18000;
    cout<<"new salary of Chief executive officer is: "<<new_sal(chief_ex_officer,9.0)<<endl;
    cout<<"new salary of information  officer is: "<<new_sal(info_officer,10.0)<<endl;
    cout<<"new salary of system analyst officer is: "<<new_sal(sys_analyst,12.0)<<endl;
    cout<<"new salary of programmer officer is: "<<new_sal(programmer,12.0)<<endl;
    return 0;
}
float new_sal(float salary,float inc)
{
    return salary+(salary*inc)/100;
}