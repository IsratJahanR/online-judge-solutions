#include <bits/stdc++.h>
#define ll long long int
#define M 1000000000000000000
using namespace std;
 int main() {
	ll N,mul=1;
	cin >> N;
    ll a[N];
    int q=0;
	for (int i = 0; i < N; i++) {
		cin >>a[i];
		if (a[i] == 0)q++;
	}
	if (q>0) {cout << "0" << endl; return 0;}
    for (int i = 0; i < N; i++) {

        if (a[i] >M/mul ) {cout << "-1" << endl; return 0;}
		else  mul*=a[i];
     }
	cout <<mul<< endl;
}
