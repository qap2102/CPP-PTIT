#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))
int tongcs(int n){
    int ans=0;
    while(n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
int res(int n){
    if (n<10) return n;
    return res(tongcs(n));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout << res(n) << "\n";
    }
}