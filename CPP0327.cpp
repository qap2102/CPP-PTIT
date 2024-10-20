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
        string a;
		cin>>a;
		int n=a.size();		
		int s=0;
		if(a[n-1]=='1') s=1;
		for(int i=n-2;i>=0;i--){
			if(a[i]=='1'){
				if((n-i-1)%4==1) s+=2;
				else if((n-i-1)%4==2) s+=4;
				else if((n-i-1)%4==3) s+=8;
				else if((n-i-1)%4==0) s+=6;
			}
		}
		if(s%5==0) cout<<"Yes\n";
		else cout<<"No\n";
    }
}