// Assume that employee will have to pay 10 percent income tax to the government.
// Ask user to enter the employee salary. Use inline function to display the net
//payment to the employee by the company.
#include<iostream>
using namespace std;
inline float net(float sal)
{
    cout<<"the net salary recieved is :"<<(sal-(10*sal)/100);
}
int main()
{
    float salary;
    cout<<"enter your salary";
    cin>>salary;
    net(salary);
    return 0;
}
