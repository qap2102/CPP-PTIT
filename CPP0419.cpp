#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e5+5;
int a[N],b[N];
set<int> c;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        c.clear();
        for(int i=0;i<n;i++){
            cin>>a[i];
            c.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            c.insert(b[i]);
        }
        for(int x:c) cout<<x<<" ";
        sort(a,a+n);
        sort(b,b+m);
        cout<<endl;
        for(int i=0;i<n;i++){
            if(binary_search(b,b+m,a[i])) cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}