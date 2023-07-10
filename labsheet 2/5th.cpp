/*    Assume that an object represents an employee report that contains information like employee id, 
total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write 
a program that displays the report. Use setpara() member function to set report attributes by passing the arguments
 and member function displayreport() to show the report according to the parameter passed. Display the report in the 
 following format.

An employee with ... ... ... has received Rs ... ... ...as a bonus

and

had worked ... ... ... hours as overtime in the year ... ... ...*/
#include<iostream>
using namespace std;
class report
{
    int id;
    float bonus;
    float total_overtime;
    public:
    void setpara(int id,float bonus,float total_overtime)
    {
        this->id=id;
        this->bonus=bonus;
        this->total_overtime=total_overtime;
    }
    void displayreports()
    {
        cout<<"An employee with  id "<<id<<endl;
        cout<<"has recieved Rs "<<bonus<<" as a bonus"<<endl<<"and"<<endl;
        cout<<"had worked "<<total_overtime<<"hours as overtime in the year"<<endl<<endl;
    }
};
int main()
{
    int id,n;
    float bonus,total_overtime;
    cout<<"enter number of employees :"<<endl;
    cin>>n;
    report *r;
    r= new report[n];
    for(int i=1;i<n;i++)
    {
        cout<<"enter employee id"<<endl;
        cin>>id;
        cout<<"enter bonus recieved"<<endl;
        cin>>bonus;
        cout<<"Enter your total overtime word"<<endl;
        cin>>total_overtime;
        r[i].setpara(id,bonus,total_overtime);
    }
      for(int i=1;i<n;i++)
    {
        r[i].displayreports();
    }
    delete []r;
    return 0;
}