#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        cout<<str[0];
        for(int i=1;str[i]!='\0';i++)
        {
            if(i%2!=0)cout<<str[i];
        }


        cout<<endl;
    }
    return 0;
}
