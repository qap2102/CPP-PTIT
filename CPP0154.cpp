#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll res(ll a, ll b){
    return (b-a+1)*(a+b)/2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a,b;
        a=n/k;
        b=n%k;
        cout << ((a+1)*res(1,b)+a*res(b+1,k-1)==k) << "\n";
    }
}