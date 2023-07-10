#include<iostream>
#include<cstdlib>
using namespace std;
class prime
{
   int n, flag=0;
   public:
   void check()
   {
      for(int i=2;i<=(n/2);i++)
      {
         if(n%i==0)
         flag=1;
      }
   }
      void getdata()
      {
         cout<<"enter a number";
         cin>>n;
      }
      void showdata()
      {
           if(n==1)
         {
         cout<<"the number is neither prime nor composite"<<endl;
         exit(0);
         }
         if(flag==1)
             cout<<"the number is composite"<<endl;
             else
                 cout<<"the number is prime"<<endl;
      }
   };
int main()
{
   char ck='y';
   prime p;
   while(ck=='y')
   {
      p.getdata();
      p.check();
      p.showdata();
      cout<<"do you want ot enter more number press 'y' for yes and 'n' for no";
      cin>>ck;
   }
   return 0;
}