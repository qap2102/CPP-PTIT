#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
string res(char x){
    if (x=='A'||x=='B'||x=='C') return "2";
    if (x=='D'||x=='E'||x=='F') return "3";
    if (x=='G'||x=='H'||x=='I') return "4";
    if (x=='J'||x=='K'||x=='L') return "5";
    if (x=='M'||x=='N'||x=='O') return "6";
    if (x=='P'||x=='Q'||x=='R'||x=='S') return "7";
    if (x=='T'||x=='U'||x=='V') return "8";
    return "9";
}
bool palin(string s){
    int n=s.size();
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-i-1]) return false;
    }
    return true;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1="";
        for(char x:s) s1+=res(toupper(x));
        cout << (palin(s1)?"YES":"NO") << "\n";
    }
}
