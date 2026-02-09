#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    float S=0;
    cout<<showpoint;
    cout<<setprecision(2);
    cout<<fixed;
    for(i=1;i<=100;i++)
    {
       S=S+(1.0/i);
    }
    cout<<S<<endl;
}
