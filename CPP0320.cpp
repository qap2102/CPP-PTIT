#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
string kt(string s){
    if(s[0]=='0') return "INVALID";
    bool a[10];
    for(char x:s){
        if(x<'0'||x>'9') return "INVALID";
        else a[x-'0']=true;
    }
    for(int i=0;i<=9;i++){
        if(!a[i]) return "NO";
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<kt(s)<<endl;
    }
}