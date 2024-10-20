#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e4+5;
int a[N];
int b[N];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        b[0]=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=b[i-1]+a[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout << b[r]-b[l-1] << endl;
        }
    }
}
