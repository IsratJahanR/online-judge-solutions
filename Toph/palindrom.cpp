#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[99];
    char s2[99];
    cin>>s1;
    int i,len=0,j;
    for(i=0;s1[i]!='\0';i++)
    {
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    //s2[j]='\0';
    int p=strcmp(s1,s2);
    if(p==0)
       cout<<"Yes"<<endl;
       else
        cout<<"No"<<endl;
}
