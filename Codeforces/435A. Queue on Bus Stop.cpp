           ///Bismillahir Rahmanir Rahim
           ///*israt Jahan Reshma


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int sum=0,s=0;
    //if(s==m)sum++;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        if(s==m){sum++; s=0;}
        if(s>m){
                if(a[i]==m){sum+=2; s=0;}
                else {sum++; s=a[i];}
        }
    }
    if(s>0){
        sum++;
    }
    cout<<sum<<endl;
}
