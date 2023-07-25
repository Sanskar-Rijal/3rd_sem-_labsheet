//Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to 
//overload equality(==), less than(<), greater than(>), not equal (!=), greater
//than or equal to (>=), and less than or equal to(<=) operators using member operator functions.
#include<iostream>
using namespace std; 
class compare
{
    float x;
    public:
    compare():x{0} {};
    compare(float x):x{x}{};
    bool operator == (compare c1)
    {
        return (x==(c1.x));
    }
    bool operator < (compare c1)
    {
        return (x<(c1.x));
    }
    bool operator >(compare c1)
    {
        return (x>c1.x);
    }
     bool operator !=(compare c1)
    {
        return (x!=c1.x);
    }
     bool operator >=(compare c1)
    {
        return (x>=c1.x);
    }
     bool operator <=(compare c1)
    {
        return (x<=c1.x);
    }
};
int main()
{
    compare comp1(7),comp2(5);
    if(comp1==comp2) //compiler reads this code as-> c1.operator==(c2)
    {
        cout<<"both are equal"<<endl;
    }
     if (comp1< comp2)//compiler reads this code as-> c1.operator==(c2)
    {
        cout<<"comp1 is greater than comp 2"<<endl;
    }
     if (comp1 > comp2)//compiler reads this code as-> c1.operator==(c2)
    {

    }
      if (comp1 != comp2)//compiler reads this code as-> c1.operator==(c2)
    {
        cout<<"comp1 is not equal to comp 2"<<endl;   
    }
      if (comp1 <= comp2)//compiler reads this code as-> c1.operator==(c2)
    {
        cout<<"comp1 is greater than equal to comp2"<<endl;
    }
      if (comp1 >= comp2)//compiler reads this code as-> c1.operator==(c2)
    {
        cout<<"comp1 is less than equal to comp 2"<<endl;
    }
    return 0;
}