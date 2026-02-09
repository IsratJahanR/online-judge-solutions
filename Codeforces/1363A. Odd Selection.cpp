#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],o=0,e=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)o++;
            else e++;
        }
        if(x==n)
        {
            if(o%2!=0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(o==0)cout<<"No"<<endl;
        else {
            if(x<o){
                     if(e>0 || x%2!=0)cout<<"Yes"<<endl;
                     else cout<<"No"<<endl;
             }
             else cout<<"Yes"<<endl;
        }
    }
}
