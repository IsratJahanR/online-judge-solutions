#include <bits/stdc++.h>
#include <vector>
#include <utility>
using namespace std;

#define ll             long long;
#define pb             push_back
#define loop(i,n)      for(int i=0;i<n;i++)
#define F              first
#define S              second
#define mp             make_pair
#define pint           pair<int,int>
int main(){

    int n,i,j;
    cin>>n;
    int arr[n];
    int str[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        str[i] = arr[i];
    }
    sort( str,str+n );
    vector<pint> ans;
    for (i=0;i<n;i++){
        if ( arr[i] != str[i] ){
            for (j=i+1;j<n;j++){
                if ( str[i] == arr[j] ){
                    swap( arr[i],arr[j] );
                    ans.pb( mp(i,j) );
                    break;
                }
            }
        }
    }

   cout<<ans.size()<<endl;
  for (int i=0;i<ans.size();++i)cout<<ans[i].F<<" "<<ans[i].S<<endl;

    return 0;
}
