#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
ll kt1(ll n){
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]=='6') s[i]='5';
    }
    ll tmp=stoll(s);
    return tmp;
}
ll kt2(ll n){
    string s=to_string(n);
    for(int i=0;i<s.size();i++){
        if(s[i]=='5') s[i]='6';
    }
    ll tmp=stoll(s);
    return tmp;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<kt1(a)+kt1(b)<<" "<<kt2(a)+kt2(b)<<endl;
    }
}