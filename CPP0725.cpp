#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int MOD = (int) 1e9+7;
ll n,k;
int a[1005][1005];
void tohop(){
	//n  k
	a[0][0]=1;
	a[1][0]=1;
	for(int i=1;i<1001;i++){
		for(int j=0;j<i+1;j++){
			a[i][j]=(a[i-1][j]%MOD+a[i-1][j-1]%MOD)%MOD;
		}
	}
}
int main(){
	faster;
	tohop();
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<a[n][k]<<endl;
	}
	return 0;
}

