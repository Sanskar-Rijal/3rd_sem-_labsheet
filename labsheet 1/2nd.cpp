// Write a program using the function overloading that converts feet to inches.
// Use function with no argument, one argument and two arguments. Decide yourself
// the types of arguments. Use pass by reference in any one of the function above.
#include<iostream>
using namespace std;
/*void convert()
{
    float feet=12;
    cout << feet << " is converted to inches with no argument: " << feet * 12 << endl;
}*/

void convert(float feet=10)
{
    cout << feet << " is converted to inches with one argument: " << feet * 12 << endl;
}
void convert(float feet,float& result)
{
    result=feet*12;
}
int main()
{
    float ft = 0,result=0;
    cout << "Enter the number in feet: ";
    cin >> ft;

    convert();
    convert(ft);
    convert(ft,result);
    cout<<ft<<"is converted to inches with two argument: "<<result;
    return 0;
}
