#include<bits/stdc++.h>
using namespace std;
bool a[256];
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k;
        cin>>k;
        memset(a,0,sizeof(a));
        for(char x:s) a[x]=true;
        int cnt=0;
        for(int i='a';i<='z';i++){
            cnt+=(!a[i]);
        }
        cout<<(cnt<=k)<<endl;
    }
}