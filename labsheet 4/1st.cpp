/*Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

A. Make a particular member function of one class as a friend function of another class for addition.

B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another 

class if the former class is made friend to the latter.*/
#include<iostream>
using namespace std;
class instantiating
{
    float x,y;
    public:
    instantiating():x{0},y{0} {};
    instantiating(float x,float y):x{x},y{y} {};
    friend class calculations;
    void showdata()
    {
    cout<<x<<" "<<y<<endl;
    }
};
class calculations
{
    public:
     instantiating add(instantiating &a,instantiating& b)
    {
        instantiating temp;
        temp.x=a.x+b.x;
        temp.y=a.y+b.y;
        cout<<"the addition of two coordinates are";
        return temp;
    }
     instantiating mul(instantiating &a,instantiating& b)
    {
        instantiating temp;
        temp.x=a.x*b.x;
        temp.y=a.y*b.y;
        cout<<"the multiplication of two coordinates are";
        return temp;
    }
      instantiating subs(instantiating &a,instantiating& b)
    {
        instantiating temp;
        temp.x=a.x-b.x;
        temp.y=a.y-b.y;
        cout<<"the substracting of two coordinates are";
        return temp;
    }
      instantiating div(instantiating &a,instantiating& b)
    {
        instantiating temp;
        temp.x=a.x/b.x;
        temp.y=a.y/b.y;
        cout<<"the division of two coordinates are";
        return temp;
    }
};
int main()
{
    float x,y;
    cout<<"enter the two coordinates x,y"<<endl;
    cin>>x>>y;
    instantiating i1(x,y);
    cout<<"enter the two coordinates x,y again to add them"<<endl;
    cin>>x>>y;
    instantiating i2(x,y);
    calculations c1;
    instantiating i3=c1.add(i1,i2);
    i3.showdata();
    i3=c1.subs(i1,i2);
    i3.showdata();
    i3=c1.mul(i1,i2);
    i3.showdata();
    i3=c1.div(i1,i2);
    i3.showdata();
    return 0;
}