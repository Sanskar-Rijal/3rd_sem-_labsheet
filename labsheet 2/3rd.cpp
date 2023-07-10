/*Create a class called carpark that has int data member for car id, int data member for charge/hour,
 and float data member for the parked time. Make functions to set data members and show the charges and
  parked hours of the corresponding car id. Make functions for setting and showing the data members. Member 
  function should be called from other functions.
*/
#include<iostream>
using namespace std;
class carpark
{
    int id;
    int chargeperhour;
    float parkedtime;
    public:
    void set_id(int id)
    {
        this->id=id;
    }
    void set_chargedperhour(int chargeperhour)
    {
        this->chargeperhour=chargeperhour;
    }
    void set_parkedtime(float parkedtime)
    {
        this->parkedtime=parkedtime;
    }
    void showdata()
    {
        cout<<"Car id: "<<id<<endl;
        cout<<"charge per hour : "<<chargeperhour<<endl;
        cout<<"parked time: "<<parkedtime<<endl;
        cout<<"total charge: "<<chargeperhour*parkedtime<<endl;
    }
};
int main()
{
    carpark c;
    int id,chargeperhour;
    float parkedtime;
    cout<<"enter car id: "<<endl;
    cin>>id;
    c.set_id(id);
    cout<<"enter charge/hour"<<endl;
    cin>>chargeperhour;
    c.set_chargedperhour(chargeperhour);
    cout<<"enter parked time"<<endl;
    cin>>parkedtime;
    c.set_parkedtime(parkedtime);
    c.showdata();
    return 0;
}