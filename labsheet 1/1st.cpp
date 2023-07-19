//1)Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print 
//out the values in the format 11/28/2004 by function. Pass the structure to the function
#include <iostream>
using namespace std;
typedef struct date
{
    int month;
    int day;
    int year;
}dd;
void input(dd& s1)
{
    cout<<"Enter month "<<endl;
    cin>>s1.month;
    cout<<"Enter day "<<endl;
    cin>>s1.day;
    cout<<"Enter year "<<endl;
    cin>>s1.year;
}
void display(dd s1)
{
    cout<<"the entered date in the format mm/dd/yy is"<<endl<<s1.month<<"/"<<s1.day<<"/"<<s1.year;
}

int main() {
    dd s1;
    input(s1);
    display(s1);
    return 0;
}