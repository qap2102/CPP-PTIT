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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt=0;
        while(1){
            int m=0;
            for(int i=0;i<n;i++){
                if(a[i]&1){
                    a[i]--;
                    cnt++;
                }
                if(a[i]==0) m++;
            }
            if(m==n) break;
            for(int i=0;i<n;i++){
                a[i]/=2;
            }
            cnt++;
        }
        cout<<cnt<<endl;
	}
}