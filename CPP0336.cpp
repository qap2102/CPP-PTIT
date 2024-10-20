#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int a[256];
bool kt;
bool res(string s){
    int b[256]={0};
    for(char x:s) b[x]++;
    for(int i='a';i<='z';i++){
        if(b[i]<a[i]) return false;
    }
    return true;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        memset(a,0,sizeof(a));
        for(char x:s2) a[x]++;
        int n=s1.size();
        kt=false;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                string s3=s1.substr(j,i);
                if(res(s3)){
                    cout<<s3;
                    kt=true;
                    break;
                }
            }
            if(kt) break;
        }
        if(!kt) cout<<-1;
        cout<<endl;
    }
}