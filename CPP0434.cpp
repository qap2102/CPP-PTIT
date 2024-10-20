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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<a[0]*a[1]<<" ";
        for(int i=1;i<n-1;i++){
            cout<<a[i-1]*a[i+1]<<" ";
        }
        cout<<a[n-1]*a[n-2]<<endl;
    }
}