#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,l,w;
    cin>>n>>m>>a;
    //while(cin>>n>>m>>a)
    //{
        //if(a>m&a>n)cout<<"1"<<endl;
        //else
        //{
        l=n/a;
        w=m/a;
            if(n%a!=0)l++;
            if(m%a!=0)w++;
            cout<<l*w<<endl;
        //}
    //}
    return 0;
}

