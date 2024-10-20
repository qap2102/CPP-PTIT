#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int solve(string s, int m){
    int n=s.size();
    int ans=0;
    for(int i=0;i<=n-1;i++){
        int a=0;
        for(int j=i;j<=n-1;j++){
            a=(a*10+s[j]-'0')%m;
            ans+=(a==0);
        }
    }
    return ans;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<solve(s,8)-solve(s,24)<<endl;
    }
}