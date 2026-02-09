      ///ISRAT JAHAN RESHMA
      ///from: BSMRSTU(SHIICT)


#include<bits/stdc++.h>
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
using namespace std;
int main()
{
    MP
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c=0,cc;
        string s;
        cin>>s;
        n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')c++;
        }
        if(c==n){cout<<n<<endl; continue; }
        if(c==0){cout<<0<<endl; continue; }
        cc=0;
        vector<int >v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')cc++;
            else {
                    if(cc>0)v.pb(cc);
                    cc=0;
                 }
        }
        if(cc>0)v.pb(cc);
        sort(v.begin(),v.end());
        int q=v.size();
        int sp=0;
        if(q%2==0){
        for(int i=q-1;i>=0;i--)
        {
          if(i%2!=0)sp+=v[i];
        }
        }
        else {
        for(int i=q-1;i>=0;i--)
        {
          if(i%2==0)sp+=v[i];
        }
        }
        cout<<sp<<endl;
    }
}
