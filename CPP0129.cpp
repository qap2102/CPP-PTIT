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
		int n,p;
		cin>>n>>p;
		int check,x=0;
		for(int i=1;i<=n;i++){
			check=i;
			while(check%p==0){
				x++;
				check/=p;
			}
		}
		cout<<x<<endl;
	}
}