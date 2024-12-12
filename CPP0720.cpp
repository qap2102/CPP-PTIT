#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		int maxx=INT_MIN;
		for(int i=0;i<n;++i){
			vector<int> v;
			for(int j=0;j<=i;++j){
				auto it=lower_bound(v.begin(),v.end(),a[j]);
				if(it==v.end()) v.push_back(a[j]);
				else *it=a[j];
			}
			int s=v.size();
			vector<int> v1;
			for(int j=n-1;j>=i;--j){
				auto it=lower_bound(v1.begin(),v1.end(),a[j]);
				if(it==v1.end()) v1.push_back(a[j]);
				else *it=a[j];
			}
			int s1=v1.size();
			maxx=max(maxx,s+s1-1);
		}
		cout<<maxx<<endl;
	}
}
