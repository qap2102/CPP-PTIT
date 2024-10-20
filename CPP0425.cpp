#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1005;
int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[N];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int b[N];
		int j=0;
		for(int i=0;i<n;i+=2){
			b[i]=a[j];
			j++;
		}
		for(int i=1;i<=n;i+=2){
			b[i]=a[j];
			j++;
		}
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}
