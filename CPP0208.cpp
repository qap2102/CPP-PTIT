#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e5+5;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[N];
        for(int i=0;i<=n-1;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[k-1]<<endl;
    }
}