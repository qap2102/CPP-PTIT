#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))
ll gcd(ll a, ll b){
	while(b!=0){
		ll r=a%b;
		a=b;
		b=r;
	}
	return a;
}
ll bcm(ll a, ll b){
	return a*b/gcd(a,b);
}
main(){
	int t;
	cin>>t;
	while(t--){
		ll a, b;
		cin>>a>>b;
		cout<<bcm(a,b)<<" "<<gcd(a,b)<<endl;
	}
	return 0;
}
