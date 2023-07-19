// Write a function that passes two temperatures by reference and sets the
// larger of the two numbers to a value entered by user by using return by reference
#include<iostream>
using namespace std;
float& temp(float& t1,float& t2)
{ 
  return t1>t2?t1:t2;
    
}
int main()
{
    float t1=33,t2=36.4;
    cout<<"Enter a temperature";
    cin>>temp(t1,t2);
    cout<<"hence the final temperatures are:"<<endl;
    cout<<"t1="<<t1<<"\t";
    cout<<"t2="<<t2;
   return 0;
}