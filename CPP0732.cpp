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
		int a[n], b[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
			b[i]=a[i];
		}
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(a[i]>a[j]){
					b[i]=max((a[i]+b[j]),b[i]);
				}
			}
		}
		int maxx=INT_MIN;
		for(int i=0;i<n;++i){
			maxx=max(maxx,b[i]);
		}
		cout<<maxx<<endl;
	}
}
