#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n], b[n], i = 0,j=n-1, sum = 0;
        for(int i = 0; i < n; i++) cin>>a[i];
        for(int i = 0; i < n; i++) cin>>b[i];
        sort(a, n+a);
        sort(b, n+b, greater<int>());
        while(k--) if(a[i] < b[i]) swap(a[i], b[i]), i++;
        for(int i = 0; i < n; i++) sum += a[i];
        cout<<sum<<endl;
    }
    return 0;
}
