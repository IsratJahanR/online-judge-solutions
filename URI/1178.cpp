#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    double X;
    cin>>X;
    cout<<showpoint;
    cout<<setprecision(4);
    cout<<fixed;
      for(i=0;i<100;i++)
    {

            cout<<"N["<<i<<"] = "<<X<<endl;
            X=X/2.0;
    }


}

