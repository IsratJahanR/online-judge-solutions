#include<bits/stdc++.h>
#define ll         long long
using namespace std;
int MaxGCD(int n)
{
    int h = 0;
    for (int i = 1; i <= n; i++)
    h = max(h, i);
    int count[h + 1] = {0};
    for (int i = 1; i <= n; i++)
        count[i]++;
    int counter = 0;

    for (int i = h; i >= 1; i--)
    {
        int j = i;
       counter = 0;

        while (j <= h)
        {
         if(count[j] >=2)
            return j;
         else if (count[j] == 1)
            counter++;
            j += i;
            if (counter == 2)
                return i;
        }
    }
}

int main()
{
    ll x,t;
    cin>>t;
    while(t--)
    {
      cin>>x;
      cout<<MaxGCD(x)<<endl;
    }

    return 0;
}
/*
int main()
{
    ll x,t;
    cin>>t;
    while(t--)
    {
      cin>>x;
      cout<<x/2<<endl;
    }

    return 0;
}*/
