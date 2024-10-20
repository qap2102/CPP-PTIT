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
        int n,x,check=-1;
		cin>>n;
		map <int,int> a;
		for(int i=0;i<n;i++){
			cin>>x;
			a[x]++;
			if(a[x]==2&&check==-1) check=x;
		}
		cout<<check<<endl;
    }
}