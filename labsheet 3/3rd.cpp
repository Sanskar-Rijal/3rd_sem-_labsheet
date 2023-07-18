/*Write a class that can store Department ID and Department Name with constructors to initialize its members.
Write destructor member in the same class and display the message "Object n goes out of the scope".
Your program should be made such that it should show the order of constructor and destructor invocation.*/
#include<iostream>
#include<cstring>
using namespace std;
class store
{
    static unsigned int count;
    int dep_id;
    string dep_name;
    public:
    store()
    {
        dep_id=0;
        dep_name="";
        cout<<"the default constructor is called and the details are-"<<endl;
        cout<<dep_name<<endl<<dep_id<<endl;
    }
    store(int id,const string name)
    {
        dep_id=id;
        dep_name=name;
         cout<<"the parameterized constructor is called and the details are-"<<endl;
        cout<<dep_name<<endl<<dep_id<<endl;   
    }
    ~store()
    {
        count++;
        cout<<"destructor is called "<<count<<endl;
    }
};
unsigned int store::count = 0;
int main()
{
    store s,s1(1232,"sanskar");
    return 0;
}