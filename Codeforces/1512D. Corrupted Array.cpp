///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///

#include<bits/stdc++.h>

///.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
#define f               first
#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'

///.....................function..................>


#define Fast            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
#define sort(a)         sort(a.begin(),a.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<>())
#define reverse(a)      reverse(a.begin(),a.end())
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";


using namespace std;
int main()
{
    //Fast
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,i,s1=0,s2=0,i1=-1,i2=-1,p,j1,j2,j,x=0,b,sum=0,maxe=-1;
        cin>>n;
        vector<int> a;
        for(i=0;i<n+2;i++)
        {
            cin>>b;
            a.pb(b);
            s1+=b;
        }
        sort(a);
        //for(i=0;i<n+2;i++)cout<<a[i];
        sum=s1-a[n+1];
       // cout<<sum<<endl;
        for(i=0;i<n+1;i++)
        {

            if(sum-a[i]==a[n+1])
            {
                i1=i;
                break;
            }

        }
        //cout<<i1<<endl;
        if(i1!=-1)
        {
            for(i=0;i<n+1;i++)
            {
                if(i!=i1)cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            sum=s1-a[n];
            //cout<<sum<<endl;
            for(i=0;i<n+2;i++)
            {
                if(sum-a[i]==a[n] && i!=n)
                {
                  i1=i;
                  break;
                }
            }

            if(i1!=-1)
            {
                for(i=0;i<n+2;i++)
                {
                   if(i!=i1 && i!=n)cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else cout<<-1<<endl;
        }





    }

    return 0;
}
