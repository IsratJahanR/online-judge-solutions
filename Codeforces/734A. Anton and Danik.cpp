#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,A=0,D=0;
    cin>>n;
    string s;
    cin>>s;
    while(s[i]!='\0')
    {
        if(s[i]=='A')A++;
        else D++;
        i++;

    }
    if(A>D)cout<<"Anton"<<endl;
    else if(D>A)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

}
