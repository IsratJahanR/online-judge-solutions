#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    int c=0,p=0;
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)
    {
        p+=x[i];
        if(p==-1)
            {
                c++;
                p=0;
            }
    }
    cout<<c<<endl;



}

