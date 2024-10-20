#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        // string a;
        // cin>>a;
        // map<char,int> mp;
        // vector<int> v;
        // for(char x:a){
        //     mp[x]++;
        // }
        // for(auto i:mp){
        //     v.push_back(i.second);
        // }
        // sort(v.begin(),v.end());
        // int check=v.back(),sum=0;
        // for(int i=0;i<v.size()-1;i++){
        //     sum+=v[i];
        // }
        // if(check-sum>=2) cout<<0<<endl;
        // else cout<<1<<endl;
        string s;
        cin>>s;
        int a[256];
        memset(a,0,sizeof(a));
        int cnt=0;
        for(char x:s){
            a[x]++;
            cnt=max(cnt,a[x]);
        }
        if(cnt<=(s.size()+1)/2) cout<<1<<endl;
        else cout<<0<<endl;
    }
}