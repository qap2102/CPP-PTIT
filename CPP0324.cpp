#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll chia(string s, ll m){
	ll du=0;
	for(int i=0;i<s.size();++i){
		du=(du*10+(s[i]-'0'))%m;
	}
	return du;
}
ll powmod(ll coso,ll mu,ll m){
	ll ans=1;
	while(mu){
		if(mu&1){
			ans*=coso;
			ans%=m;
		}
		coso*=coso;
		coso%=m;
		mu/=2;
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		cin>>a;
		ll b,M;
		cin>>b>>M;
		ll tmp=chia(a,M);
		cout<<powmod(tmp,b,M)<<endl;
	}
}
