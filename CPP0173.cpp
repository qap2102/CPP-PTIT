#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
ll lcm(ll a, ll b){
    return a*b/__gcd(a,b);
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        ll x,y,z,n;
        cin>>x>>y>>z>>n;
        ll p=lcm(x,lcm(y,z));
        string sp=to_string(p);
        if(sp.size()>n) cout<<-1;
        else{
            ll q=1;
            for(ll i=1;i<=n-1;i++){
                q*=10;
            }
            ll r=q/p;
            if(q%p) r++;
            p*=r;
            string sp=to_string(p);
            cout<<(sp.size()==n ? p : -1);
        }
        cout<<endl;
    }
}