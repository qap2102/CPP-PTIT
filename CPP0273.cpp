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
		int a[100005];
		for(int i=1;i<=n;++i){
			int x;
			cin>>x;
			a[i]=a[i-1]+x;
		}
		int check=-1;
		for(int i=1;i<=n;++i){
			if(a[i-1]==a[n]-a[i]){
				check=i;
				break;
			}
		}
		cout<<check<<"\n";
	}
}
