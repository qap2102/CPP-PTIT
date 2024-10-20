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
        int n;
        cin>>n;
        int a[n+1];
        int s=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]>s) s=a[i];
        }
        int left, right;
        for(int i=1;i<=n-1;i++){
            if(a[i]>a[i+1]){
                left=i;
                break;
            }
        }
        for(int i=n;i>=2;i--){
            if(a[i]<a[i-1]){
                right=i;
                break;
            }
        }
        int maxx=0, minn=1e9;
        for(int i=left;i<=right;i++){
            if(a[i]>maxx) maxx=a[i];
            if(a[i]<minn) minn=a[i];
        }
        for(int i=1;i<=n;i++){
            if(a[i]>minn){
                cout<<i<<" ";
                break;
            }
        }
        for(int i=n;i>=1;i--){
            if(a[i]<maxx){
                cout<<i<<" ";
                break;
            }
        }
        cout<<endl;
    }
}