#include<iostream>
using namespace std;
int main()
{
    int N[20];
    int i,j;
    for(i=0;i<20;i++)
    {
        cin>>N[i];
    }
    for(i=19,j=0;i>=0,j<20;i--,j++)
    {
        cout<<"N["<<j<<"] = "<<N[i]<<endl;
    }
}
