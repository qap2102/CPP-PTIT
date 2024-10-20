#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
string tong(string s){
    int ans=0;
    for(char x:s) ans+=(x-'0');
    return to_string(ans);
}
bool check(string s){
    if(s=="9") return true;
    if(s.size()==1) return false;
    return check(tong(s));
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<check(s)<<endl;
    }
}