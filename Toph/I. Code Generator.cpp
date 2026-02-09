
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int c=0,d=0,e=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='c')c++;
        if(s[i]=='d')d++;
        if(s[i]=='e')e++;
        if(s[i]=='o')o++;

    }
    int m=max(max(max(c,d),e),o);
    cout<<m<<endl;
}*/
int main()
{
    int x,y,n;
    int t; cin>>t;
    while(t--)
    {
      cin>>n>>x>>y;
      for(int i=1;i<n;i++)
      {
          if(i%x==0 && i%y!=0)cout<<i<<" ";
      }
    }
}
