#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
set<char> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k;
        cin>>k;
        int cnt=0;
        int n=s.size();
        for(int i=0;i<=n-1;i++){
            a.clear();
            for(int j=i;j<=n-1;j++){
                a.insert(s[j]);
                if(a.size()==k) cnt++;
                else if(a.size()>k) break;
            }
        }
        cout<<cnt<<endl;
    }
}
