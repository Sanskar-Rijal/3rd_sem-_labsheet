/*Write a program that has a class with a dynamically allocated character array as its data member.
One object should contain "Engineers are" and another should contain " Creatures of logic".
Member function join() should concatenate two strings by passing two objects as arguments.
Display the concatenated string through a member function. Use constructors to allocate and initialize the data member.
Also, write a destructor to free the allocated memory for the character array.
Make your own function for the concatenation of two strings.*/

#include<iostream>
//#include<cstring>
#include<string>
using namespace std;
class character
{
    string *str;
    public:
    character(const string user)
    {
        str=new string(user);
    }
    void join(character &a, character &b)
    {
        *str=*(a.str)+(" ")+*(b.str);
    }
    void showdata()
    {
        cout<<"the concanated of two string is -";
        cout<<*str;
    }
    ~character()
    {
        delete str;
    }
};
int main()
{
    character c1("Engineers are"),c2("Creatures of logic");
    character c3("");
    c3.join(c1,c2);
    c3.showdata();
    return 0;
}

