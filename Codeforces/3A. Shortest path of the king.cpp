#include<bits/stdc++.h>
using namespace std;
int main()
{
   // int t; cin>>t; while(t--){
    string s,ss;
    cin>>s>>ss;
    int a1=(s[0]-'0')-(ss[0]-'0');
    int a2=(s[1]-'0')-(ss[1]-'0');
    //cout<<a1<<" "<<a1<<endl;
    int n=max(abs(a1),abs(a2));
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        if(i<abs(a1))
        {
            if(a1<0)cout<<"R";
            else if(a1>0) cout<<"L";
        }
        if(i<abs(a2))
        {
            if(a2>0)cout<<"D";
            else if(a2<0)cout<<"U";
        }
        cout<<endl;
    }
    //}

}
