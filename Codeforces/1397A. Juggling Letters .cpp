
    ///ISRAT JAHAN RESHMA


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        string s;
        string st="";
        for(int i=0;i<n;i++)
        {
            cin>>s;
            st+=s;
        }
        sort(st.begin(),st.end());
        int sum=0;
        int qq=0;
        for(int i=0;i<st.size();i++)
        {
          if(st[i]==st[i+1])sum++;
          else
          {

          if((sum+1)%n!=0){qq=1; break; }
           sum=0;
          }
        }
        //if(sum>0 && (sum+1)%n!=0)qq=1;
            if(qq==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

    }
}
