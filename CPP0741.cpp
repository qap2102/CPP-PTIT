#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
ll solve(ll n,ll k,ll p){
    if(k==1) return n;
    ll res=solve(n,k/2,p);
    if(k%2==0) return (res*res)%p;
	else return (((res*res)%p)*n)%p;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        ll x,y,p;
        cin>>x>>y>>p;
        cout<<solve(x,y,p)<<endl;

    }
}