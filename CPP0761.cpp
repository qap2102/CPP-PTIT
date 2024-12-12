#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
ll gcd(ll a, ll b){
	while(b!=0){
		ll r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		ll a;
		cin>>a;
		cin.ignore();
		string s;
		cin>>s;
		ll sum=0;
		for(int i=0;i<s.size();++i){
			sum=sum*10+s[i]-'0';
			sum%=a;
		}
		ll ucln=gcd(a,sum);
		cout<<ucln<<endl;
	}
}
