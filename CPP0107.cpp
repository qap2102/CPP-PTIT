#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const string s1="ABBADCCABDCCABD";
const string s2="ACCABCDDBBCDDBB";
char a;
int main(){
    faster;
    int t;
    cin>>t;
    cout << setprecision(2) << fixed;
    while(t--){
        int n;
        cin>>n;
        string s="";
        for(int i=1;i<=15;i++){
            cin>>a;
            s+=a;
        }
        int ans=0;
        if(n==101){
            for(int i=0;i<=14;i++){
                ans+=(s[i]==s1[i]);
            }
        }
        else if(n==102){
            for(int i=0;i<=14;i++){
                ans+=(s[i]==s2[i]);
            }
        }
        cout << (float)ans/15*10 << "\n";
    }
}