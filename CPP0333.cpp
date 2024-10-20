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
    vector<string> a;
    while(cin>>s) a.push_back(s);
    for(int i=0;i<=a.size()-1;i++){
        a[i][0]=toupper(a[i][0]);
        for(int j=1;j<=a.size()-1;j++){
            a[i][j]=tolower(a[i][j]);
        }
    }
    for(int i=0;i<=a.back().size()-1;i++){
        a.back()[i]=toupper(a.back()[i]);
    }
    if(a.size()==1) cout<<a[0];\
    else{
        cout<<a[0];
        for(int i=1;i<=a.size()-2;i++) cout<<" "<<a[i];
        cout<<", "<<a.back();
    }
}