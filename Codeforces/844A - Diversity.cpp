#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int p;
    cin>>s;
    cin>>p;
    int i;
    int q=s.size();
    if(p>q){     cout<<"impossible"<<endl; return 0; }
    sort(s.begin(),s.end());
    int sum=0;
    for(i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])sum++;
    }
    //cout<<sum+1<<endl;
    if(p<=sum+1)cout<<0<<endl;
    else cout<<p-(sum+1)<<endl;
   // int r=q-sum;
   // if(r>=p)cout<<q-p<<endl;
}
