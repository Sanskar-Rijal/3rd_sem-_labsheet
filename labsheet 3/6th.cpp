/*
Create a class with a data member to hold a "serial number" for each object created from the class.
That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members.
Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.*/
#include<iostream>
using namespace std;
class Serial
{
    int number;
    static int count;
    public:
    Serial()
    {
        count++;
        number=count;
    }
    void showdata()
    {
        cout<<"serial no for object"<<number<<"is"<<number<<endl;
        cout<<"the value of count for object"<<number<<"is"<<count<<endl;
    }
};
int Serial::count;
int main()
{
    Serial s1,s2,s3;
    s1.showdata();
    s2.showdata();
    s3.showdata();
    return 0;
}