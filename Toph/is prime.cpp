#include<iostream>
using namespace std;
int main()
{
    int i,c=0;
    int n;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==0)
    cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
