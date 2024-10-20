#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int res(int n){
    return n*(n-1)/2;
}
int main(){
    faster;
    int t;
    cin>>t;
    int a[256];
    while(t--){
        string s;
        cin>>s;
        memset(a,0,sizeof(a));
        for(char x:s) a[x]++;
        int b=s.size();
        for(int i='a';i<='z';i++){
            b+=res(a[i]);
        }
        cout<<b<<endl;
    }
}