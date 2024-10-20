#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

int sum(int n){
	int s=0;
	while(n){
		int r=n%10;
		s+=r;
		if(!nt(r)) return 0;
		n/=10;
	}
	return nt(s);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(sum(i)&&nt(i)) ++cnt;
		}
		cout<<cnt<<endl;
	}
}
