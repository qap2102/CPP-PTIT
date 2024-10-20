#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
set<string> a;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1,s2,s;
        getline(cin,s1);
        getline(cin,s2);
        stringstream ss(s1);
        a.clear();
        while(ss>>s){
            if(s2.find(s)==string::npos) a.insert(s);
        }
        for(string x:a) cout<<x<<" ";
        cout<<"\n"; 
    }
}