#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
ll n,a[N];
ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}
int main(){
    faster;
    a[1]=1;
    for(int i=2;i<=1000000;i++) a[i]=lcm(a[i-1],i);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << a[n] << "\n";
    }
}