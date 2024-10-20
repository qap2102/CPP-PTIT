#include<bits/stdc++.h>
using namespace std;
bool palin(string s){
    int a=s.size();
    for(int i=0;i<a/2;i++){
        if(s[i]!=s[a-i-1]) return false;
    }
    return true;
}
bool chan(string s){
    int a=s.size();
    for(int i=0;i<=a-1;i++){
        if((s[i]-'0')&1) return false; // a&1 là kiểm tra số lẻ 
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout << (palin(s)&&chan(s)?"YES":"NO") << "\n";
    }
}
