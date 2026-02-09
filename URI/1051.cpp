#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x,y;
    cin>>x;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    if(x>=0&&x<=2000.00)
        cout<<"Isento"<<endl;
   if(x>=2000.01&&x<=3000.00)
    {
        y=(x-2000)*8/100;
        cout<<"R$ "<<y<<endl;
    }
   if(x>=3000.01&&x<=4500.00)
    {
        y=1000*8/100 + (x-3000)*18/100;
        cout<<"R$ "<<y<<endl;
    }
    if(x>4500.00)
    {
        y = 1000*8/100.00 + 1500*18/100.00 + (x-4500)*28/100;
        cout<<"R$ "<<y<<endl;
    }

}
