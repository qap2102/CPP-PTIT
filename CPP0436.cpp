#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e5+5;
int a[N],b[N];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int kt=upper_bound(a,a+n,b[i])-a;
            if(kt==n) cout<<"_";
            else cout<<a[kt]<<" ";
        }
        cout<<endl;
    }
}