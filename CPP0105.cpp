#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))
string s;
bool a[10];
bool res(string s){
    for(char x:s)
        if (x!='0'&&x!='6'&&x!='8'&&a[x]) return false;
    return true;
}
int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        fill(a,false);
        for(char x:s) a[x-'0']=true;
        cout << (res(s)?"YES":"NO") << "\n";
    }
}