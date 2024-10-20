#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        d%=n;
        int a[n*2];
        for(int i=0;i<=n-1;i++){
            cin>>a[i];
            a[i+n]=a[i];
        }
        for(int i=0;i<=n-1;i++){
            cout<<a[i+d]<<" ";
        }
        cout<<endl;
    }
}