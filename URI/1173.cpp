#include<iostream>
using namespace std;
int main()
{
    int v,i,n[10];
    cin>>v;
    for(i=0;i<10;i++)
    {

        cout<<"N["<<i<<"] = "<<v<<endl;
        v=2*v;
    }
   return 0;
}
