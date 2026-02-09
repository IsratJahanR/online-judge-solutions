#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--)
    {
        int n,sss=0;
        cin>>n;
        vector<int > v;
        for(int i=4*n;i>=1;i-=2)
        {
            if(sss==n)break;
            cout<<i<<" "; sss++;
        }
        cout<<endl;
    }
}
