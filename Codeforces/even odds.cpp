#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if((n+1)/2>=k)cout<<2*k-1<<endl;
    else cout<<(k-(n+1)/2)*2<<endl;
}
