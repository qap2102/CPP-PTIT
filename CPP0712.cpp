#include <bits/stdc++.h>
#include<math.h>
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
		int n,k;
		cin>>n>>k;
		int a[k];
		for(int i=0;i<k;i++) a[i]=i+1;
		while(1){
			int ok=0;
			for(int i=0;i<k;i++) cout<<a[i];
			cout<<" ";
			for(int i=k-1;i>=0;i--){
				if(a[i]!=n-k+i+1){
					ok=1;
					a[i]++;
					for(int j=i+1;j<k;j++) a[j]=a[j-1]+1;
					break;
				}
			}
			if(ok==0) break;
		}
		cout<<endl;
	}
}