#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
vector<int> a;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int b;
        for(int i=1;i<=n*n;i++){
            cin>>b;
            a.push_back(b);
        }
        sort(a.begin(),a.end());
        cout<<a[k-1]<<endl;
    }
}