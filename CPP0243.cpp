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
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		
		map<int,int> mp;
		mp.clear();
		for(int i=0;i<n;++i){
			cin>>a[i];
			mp[a[i]]++; // dem so lan xuat hien cua phan tu a[i]
		}
		sort(a,a+n);
		for(int i=0;i<m;++i){
			cin>>b[i];
			if(mp[b[i]]!=0){
				
			
				for(int j=1;j<=mp[b[i]];++j){
					cout<<b[i]<<" ";
			}
			mp[b[i]]=0;
		}
}
		for(int i=0;i<n;++i){
			if(mp[a[i]]) cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
