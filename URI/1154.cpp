#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X,sum=0;
    float i=0;
    while(1)
    {
        cin>>X;
        if(X<0)
        break;
        else
            {

            sum=sum+X;
            i++;
        }

    }
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    float avg=sum/i;
    cout<<avg<<endl;
}
