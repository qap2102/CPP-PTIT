#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans;
        for(ll i=2;i*i<=n;++i)
            while(n%i==0){
                ans=i;
                n/=i;
            }
        if (n>1) ans=n;
        cout << ans << "\n";
    }
}