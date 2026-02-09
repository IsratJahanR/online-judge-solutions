#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        string ss="";
        string sss="";
        int sum=0;
       for(int i=0; i<n; i++){
           if(s[i]=='0'){
           ss+="0";
           sum++;
        }
        else break;
    }
    for(int i=n-1; i>=sum; i--){
        if(s[i]=='1')sss+="1";
        else {ss+="0"; break; }
    }
    ss+=sss;
    cout<<ss<<endl;

}
}

