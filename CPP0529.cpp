#include<bits/stdc++.h>
using namespace std;
struct ThucTap {
	int stt;
	string msv,ten,lop,email,dn;
};
bool cmp(ThucTap a, ThucTap b){
	return a.msv<b.msv;
}
int main(){
	int n;
	cin>>n;
	ThucTap a[n];
	for(int i=0;i<n;++i){
		a[i].stt=i+1;
		cin>>a[i].msv;
		cin.ignore();
		getline(cin,a[i].ten);
		cin>>a[i].lop;
		cin>>a[i].email;
		cin>>a[i].dn;
	}
	sort(a,a+n,cmp);
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		for(int i=0;i<n;++i){
			if(s==a[i].dn){
				cout<<a[i].stt<<" "<<a[i].msv<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].email<<" "<<a[i].dn<<endl;
			}
		}
	}
}
