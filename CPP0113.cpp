#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if(n<2) cout<<"0";
        else cout << (s[n-2]=='8'&&s[n-1]=='6');
        cout << "\n";
    }
}