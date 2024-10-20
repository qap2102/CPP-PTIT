#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=2005;
const int MOD=1e9+7;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        ll a[N];
        a[0]=1;
        for(int i=1;i<=n-1;i++){
            a[i]=(a[i-1]*x)%MOD;
        }
        int ans=0;
        for(int i=n-1;i>=0;i--){
            int b;
            cin>>b;
            ans=(ans+(b*a[i])%MOD)%MOD;
        }
        cout<<ans<<endl;
    }
}