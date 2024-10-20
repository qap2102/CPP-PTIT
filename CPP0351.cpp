#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
vector<string> b;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        cin.ignore();
        string s;
        getline(cin,s);
        stringstream ss(s);
        b.clear();
        while(ss>>s){
            for(int i=0;i<=s.size()-1;i++){
                s[i]=tolower(s[i]);
                s[0]=toupper(s[0]);
                b.push_back(s);
            }
        }
        if(a==1){
            cout<<b.back();
            if(b.size()>1){
                for(int i=0;i<=b.size()-2;i++){
                    cout<<" "<<b[i];
                }
            }
        }
        else{
            for(int i=1;i<=b.size()-1;i++){
                cout<<b[i]<<" ";
            }
            cout<<b[0];
        }
        cout<<endl;
    }
}