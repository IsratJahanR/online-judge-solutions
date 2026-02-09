    ///Submitted by : Israt Jahan Reshma
    ///From         : BSMRSTU(SHIICT)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)cin>>A[i];
        for(int i=n-1;i>=0;i--)cout<<A[i]<<" ";
        cout<<endl;
    }
}
