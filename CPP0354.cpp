#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==1) cout<<s<<"1";
        else {
            int cnt=1;
            for(int i=0;i<=s.size()-2;i++){
                if(s[i]==s[i+1]) cnt++;
                else {
                    cout<<s[i]<<cnt;
                    cnt=1;
                }
            }
            cout<<s.back()<<cnt;
        }
        cout<<endl;
    }
}