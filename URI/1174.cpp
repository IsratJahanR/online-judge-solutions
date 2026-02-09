
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    float X[100];
    cout<<showpoint;
    cout<<setprecision(1);
    cout<<fixed;
    for(i=0;i<100;i++)
    {
        cin>>X[i];
    }

    for(i=0;i<100;i++)
    {
        if(X[i]<=10)
            cout<<"A["<<i<<"] = "<<X[i]<<endl;
    }
    return 0;
}
