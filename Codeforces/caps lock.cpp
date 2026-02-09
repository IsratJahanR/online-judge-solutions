#include<bits/stdc++.h>
using namespace std;
int main()
{
      string s;
      int i,j,c=0;
      cin>>s;
      for(i=1;s[i]!='\0';i++)
         {
          if(s[i]>=97&&s[i]<=122)
            {
                 c++;
                 break;
            }
         }
      if(c==0)
        {
         if(s[0]>=65&&s[0]<=90)s[0]=s[0]+32;
         else s[0]=s[0]-32;
         for(j=1;s[j]!='\0';j++)s[j]=s[j]+32;
        }
        cout<<s<<endl;

      return 0;

}
