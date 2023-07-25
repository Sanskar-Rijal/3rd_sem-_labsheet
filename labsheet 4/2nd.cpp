/*Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition and subtraction operators 
for addition and subtraction of two coordinate objects. Implement the operator functions as non-member 
functions (friend operator functions).*/
#include<iostream>
using namespace std;
class coordinate
{
    int x,y,z;
    public:
    coordinate():x{0},y{0},z{0} {};
    coordinate(int x,int y, int z):x{x},y{y},z{z} {};
    void showdata()
    {
        cout<<"\t"<<x<<"\t"<<y<<"\t"<<z<<endl;
    }
    friend coordinate operator +(coordinate,coordinate);
    friend coordinate operator -(coordinate,coordinate);
};
coordinate operator +(coordinate a,coordinate b)
{
    coordinate add;
    add.x=a.x+b.x;
    add.y=a.y+b.y;
    add.z=a.z+b.z;
    return add;
}
coordinate operator -(coordinate a,coordinate b)
{
    coordinate sub;
    sub.x=a.x-b.x;
    sub.y=a.y-b.y;
    sub.z=a.z-b.z;
    return sub;
}
int main()
{
    coordinate c1(1,2,3),c2(3,4,6),c3;
    cout<<"after addition the result is"<<endl;
    c3=c1+c2;//compiler reads this code as->operator + (c1,c2)
    c3.showdata();
    c3=c1-c2;//compiler reads this code as->operator -(c1,c2)
    cout<<"after substraction the result is"<<endl;
    c3.showdata();
    return 0;
}