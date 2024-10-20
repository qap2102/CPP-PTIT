#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
string s;
bool res(string s){
    int cnt=1;
    for(int i=0;i<=3;i++){
        if(s[i]<s[i+1]) cnt++;
    }
    if(cnt==5) return true;
    if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]&&s[3]==s[4]) return true;
    if(s[0]==s[1]&&s[1]==s[2]&&s[3]==s[4]) return true;
    for(char x:s){
        if(x!='6'&&x!='8') return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        s=s.substr(5,6);
        s.erase(3,1);
        if(res(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}