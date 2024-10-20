#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    faster;
    string s;
    cin>>s;
    for(char &x:s) x=tolower(x);
    for(char x:s)
        if (x!='a'&&x!='e'&&x!='i'&&x!='o'&&x!='u'&&x!='y') cout << "." << x;
}