    ///ISRAT JAHAN RESHMA
    ///>>>>>>>FROM BSMRSTU(SHIICT)

#include<bits/stdc++.h>
using namespace std;
int main()

{
    long long tc,n,k;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        if(n==k)cout<<"0"<<endl;
        else if(n>k)
        {
            if((n%2==0 && k%2==0)||(n%2!=0 && k%2!=0) )cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
        else cout<<k-n<<endl;
    }
}
