#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        string a="";
        for(char x:s){
            if(isalpha(x)) a+=x;
            else ans+=(x-'0');
        }
        sort(a.begin(),a.end());
        cout<<a;
        if(ans) cout<<ans;
        cout<<endl;
    }
}