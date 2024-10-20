#include<bits/stdc++.h>
using namespace std;
int a[256];
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        memset(a,0,sizeof(a));
        for(char x:s) a[x]++;
        for(char x:s){
            if(a[x]==1) cout<<x;
        }
        cout<<"\n";
    }
}