#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll pow(int base,int power)
{
    ll ans = 1;
    for(int i=1;i<=power;i++)ans*=base;

    return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,x,i,m;
	map<string,int>mp;
	string s;
	cin>>s;
	n=s.size();
	for(int i=0;i<n;i++)
    {
        string ss="";
        for(int j=i;j<n;j++)
        {
          ss+=s[j];
          mp[ss]++;
        }
    }
    int mx=0;
    string ss="";
    for(auto it : mp)
    {
        //cout<<it.first<<" ";
        ss=it.first;
        if(it.second>1 && ss.size()>mx ){

                mx=ss.size();
        }
    }
    cout<<mx<<endl;



	return 0;
}

