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
        for(int i=0;i<=s.size()-1;i++){
            ans=ans*10+s[i]-'0';
            ans%=11;
        }
        cout<<(ans%11==0)<<endl;
    }
}