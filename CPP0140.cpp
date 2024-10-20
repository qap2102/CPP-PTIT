#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
ll a[7]={6,28,496,8128,33550336,8589869056,137438691328};
bool kt(ll n){
    for(int i=0;i<=6;i++){
        if(a[i]==n) return true;
    }
    return false;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<kt(n)<<endl;
    }
}