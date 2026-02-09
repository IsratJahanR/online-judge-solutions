///Using Two pointer Method::::::::::

#include<bits/stdc++.h>
#define pb push_back
#define pp pop_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],s1=0,s2=0;
    int i=0,j=n-1;
    vector<int > v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(i<=j)
    {
      if(a[i]>a[j])
      {
          s1+=a[i];
          i++;
          if(a[i]>a[j] && i<=j){
                s2+=a[i];
                i++;
          }
          else if(i<=j)
          {
              s2+=a[j];
              j--;
          }
      }
      else
      {
          s1+=a[j];
          j--;
          if(a[i]>a[j] && i<=j){
                s2+=a[i];
                i++;
          }
          else if(i<=j)
          {
              s2+=a[j];
              j--;
          }
      }
    }
    cout<<s1<<" "<<s2<<endl;

}
