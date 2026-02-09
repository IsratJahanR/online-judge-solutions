#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m[n],c[n],mi=0,ch=0;
    for(int i=0;i<n;i++)
    {
        cin>>m[i]>>c[i];
        if(m[i]>c[i])mi++;
        if(c[i]>m[i])ch++;
    }
    if(mi==ch)cout<<"Friendship is magic!^^"<<endl;
    else if(mi>ch)cout<<"Mishka"<<endl;
    else cout<<"Chris"<<endl;

}
