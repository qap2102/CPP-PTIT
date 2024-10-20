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
        ll b,p;
        cin>>b>>p;
        ll s=0;
        for(ll i=1;i<=p;i++){
            if((i*i)%p==1){
                ll k=i+p*(b/p);
                if(k>b) k-=p; 
	            s+=(k-i)/p+1;
            }
        }
        cout<<s<<endl;
    }
}