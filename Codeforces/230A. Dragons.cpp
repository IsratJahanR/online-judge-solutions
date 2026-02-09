#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,c=0;
    cin>>s>>n;
    pair<int ,int > x[n];
    for(int i=0;i<n;i++)cin>>x[i].first>>x[i].second;
    sort(x,x+n);
    //for(int i=0;i<n;i++)cout<<x[i].first<<" "<<x[i].second<<endl;
    for(int i=0;i<n;i++)
    {
        if(x[i].first<s){
        s+=x[i].second;
        }
        else {cout<<"NO"<<endl; return 0;}
    }
     cout<<"YES"<<endl;

}
