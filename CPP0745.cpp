#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const ll MOD=1e9+7;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a=1,b=1;
        for(int i=2;i<n;i++){
            ll k=(a+b)%MOD;
            b=a;
            a=k;
        }
        cout<<a<<endl;
    }
}