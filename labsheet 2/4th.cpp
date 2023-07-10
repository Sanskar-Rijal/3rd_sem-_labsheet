/*Write a program with classes to represent a circle, rectangle, and triangle. Each class should have 
data members to represent the actual objects and member functions to read and display objects, 
find perimeter and area of the objects, and other useful functions. Use the
 classes to create objects in your program.*/
#include <iostream>
#include<cmath>
//#define M_PI 3.14
using namespace std;
class circle
{
    float radius;
    public:
    void getdata()
    {
        cout<<"enter the radius of circle"<<endl;
        cin>>radius;
    }
    void perimeter()
    {
        cout<<"the perimeter of circle is "<<(2* M_PI *radius)<<endl ;
    }
    void area()
    {
        cout<<"the area of circle is "<<M_PI*radius*radius<<endl;
    }
};
class rectangle
{
    float length,breadth;
    public:
    void getdata()
    {
        cout<<"enter length and breadth of rectangle"<<endl;
        cin>>length>>breadth;
    }
    void perimeter()
    {
        cout<<"the perimeter of rectangle is "<<(2*(length+breadth))<<endl;
    }
    void area()
    {
        cout<<"the area of rectangle is "<<length*breadth<<endl;
    }
};
class triangle
{
    float a,b,c;
    public:
    void getdata()
    {
        cout<<"enter three sides of triangle "<<endl;
        cin>>a>>b>>c;
    }
    void perimeter()
    {
        cout<<"perimeter of triangle is "<<a+b+c<<endl;
    }
    void area()
    {
        float s;
        s=(a+b+c)/2;
        cout<<"the area of triangle is "<< sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
    }
};
int main()
{
    circle c;
    rectangle r;
    triangle t;
    c.getdata();
    c.perimeter();
    c.area();
    r.getdata();
    r.perimeter();
    r.area();
    t.getdata();
    t.perimeter();
    t.area();
    return 0;
}