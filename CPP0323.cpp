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
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		ll m;
		cin>>m;
		cout<<chia(s,m)<<endl;
	}
}
