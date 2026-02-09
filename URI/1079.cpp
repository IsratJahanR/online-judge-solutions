#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int n,i;
   float x,y,z;

   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>x>>y>>z;
       cout<<showpoint;
       cout<<fixed;
       cout<<setprecision(1);
       float sum = 2*x+3*y+5*z;
       float avg = sum/10;
       cout<<avg<<endl;
   }
   return 0;
}
