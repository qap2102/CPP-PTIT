#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
ll solve(ll a, ll b, ll c){
    if(b==0) return 0;
    ll du=solve(a,b/2,c)%c;
    if(b%2==0) return (2*du)%c;
    return (a%c+2*du)%c;

}
int main(){
    faster;
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<solve(a,b,c)<<endl;
    }
    
}
