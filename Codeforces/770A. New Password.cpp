#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,r=0;
    cin>>n>>k;
    char ch='a';
   // if(k>26)k=26;
    for(int i=1;i<=n;i++){
            cout<<ch; ch++;
            if(i%k==0)ch='a';
    }

    /*for(int i=1;i<=n;i++)
    {
        cout<<ch;
        ch++;
        r++;
        if(r==k){ch='a';
              r=0; }
    }*/

}
