#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
string s;
vector<string> a;
int main(){
    faster;
    getline(cin,s);
    stringstream ss(s);
    while(ss>>s){
        for(int i=0;i<=s.size()-1;i++){
            s[i]=tolower(s[i]);
        }
        a.push_back(s);
    }
    cout<<a.back();
    if(a.size()>1){
        for(int i=0;i<=a.size()-2;i++){
            cout<<a[i][0];
        }
    }
    cout << "@ptit.edu.vn";
}