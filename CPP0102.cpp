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
        char s;
        cin>>s;
        if (s>='A'&&s<='Z') cout << (char)tolower(s);
        else if (s>='a'&&s<='z') cout << (char)toupper(s);
        cout << "\n";
    }
}