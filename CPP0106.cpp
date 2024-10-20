#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))
string s;
bool palin(string s){
    int n=s.size();
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        cout << (palin(s)?"YES":"NO") << "\n";
    }
}