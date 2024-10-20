#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define pa pair<int,int>
const int N=1e5+5;
pa a[N];
int x;
bool kt(pa a, pa b){
    if(abs(a.first-x)<abs(b.first-x)) return true;
    if(abs(a.first-x)==abs(b.first-x)&&a.second<b.second) return true;
    return false;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a,a+n,kt);
        for(int i=0;i<n;i++){
            cout<<a[i].first<<" ";
        }
        cout<<endl;
        // int n,x;
        // cin>>n>>x;
        // int a[n+1];
        // multimap <int,int> mp;
        // for(int i=0;i<n;i++) cin>>a[i];
        // for(int i=0;i<n;i++) mp.insert({abs(x-a[i]),a[i]});
        // for(auto x:mp) cout<<x.second<<" "; cout<<endl;
    }
}