/*
    Write a program that illustrates the following relationship and comment on them. 

i) const_object.non_const_mem_function

ii) const_object.const_mem_function

iii) non_const_object.non_const_mem_function

iv) non_const_object.const_mem_function*/
#include<iostream>
using namespace std;
class  relation
{
    int a;
    public:
    void nonconstant()
    {
        cout<<"non constant member function is called"<<endl;
    }
    void constantfunction() const
    {
        cout<<"constant member funciton is called"<<endl;
    }
};
int main()
{
    relation r1 ;//non constant object 
    const relation r2 ;//constant object
    r2.nonconstant(); //the constant object can access only constant members so it will give an error
    r2.constantfunction(); //constant object can access constant member funciton
    r1.nonconstant();//non constant object can acceses non constant function
    r1.constantfunction();//non constant object can access constant function
    // in conclusion non const function can be accessed by only non const object
    return 0;
}