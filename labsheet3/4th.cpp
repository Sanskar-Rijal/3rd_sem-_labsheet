/*Assume that one constructor initializes data member say num_vehicle, hour, and rate.
There should be a 10% discount if num_vehicle exceeds 10. Display the total charge.
Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).*/
#include<iostream>
using namespace std;
class vehicle
{
    int num_vehicle;
    int hour;
    float rate;
     float total;
    public:
    vehicle(int a,int b, float c)
    {
        num_vehicle=a;
        hour=b;
        rate=c;
    }
    vehicle(vehicle& cpy)
    {
        num_vehicle=cpy.num_vehicle;
        hour=cpy.hour;
        rate=cpy.rate;
    }
    void calc()
    {
        total=(float)hour*rate;
        if(num_vehicle>10)
        {
          total=total*0.9;
        }
    }
    void showdata();
};
void vehicle::showdata()
{
    cout<<"the total charge is "<<total<<endl;
}
int main()
{
    vehicle v1(12,8,12),v2(9,8,98),v3(v1);
    v1.calc();
    v2.calc();
    v3.calc();
    v1.showdata();
    v2.showdata();
    v3.showdata();
    return 0;
}