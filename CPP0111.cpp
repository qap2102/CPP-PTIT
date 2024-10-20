#include<bits/stdc++.h>
using namespace std;
string s;
bool kt(string s){
    int n=s.size();
    for(int i=0;i<=n-2;i++){
        if(abs(s[i]-s[i+1])!=1)
            return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        cout << (kt(s)?"YES":"NO") << endl;
    }
}