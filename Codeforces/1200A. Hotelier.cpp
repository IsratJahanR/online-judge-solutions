#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    string s; cin>>s;
    int a[n];
    vector <int> aa;
    for(int i=0;i<n;i++)
    {
      aa.push_back(0);
    }
    for(int i=0;i<n;i++)
    {
      if(aa[i]=='L')
      aa.insert(1);
    }
}
