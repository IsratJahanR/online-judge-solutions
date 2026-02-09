#include<bits/stdc++.h>
using namespace std;
int main()
{ char ch=' ';
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y') continue;
        else {cout<<"."<<s[i];}
    }//Another way:
    //->>>>>>>>
   /* for(int i=0;i<s.length();i++)
    {        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||
           s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
            s.erase(s.begin()+i);

    }
    //cout<<s<<endl;
    //cout<<s.length()<<endl;
    for(int j=0;j<s.length();j++)
    {
     if(s[j]>=65&&s[j]<=90){ch=(s[j]+32);
            cout<<"."<<ch;}
     else cout<<"."<<s[j];
    }
    cout<<endl;*/
}
