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
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                a[i]*=2;
                a[i+1]=0;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]) cout<<a[i]<<" ";
        }
        for(int i=0;i<n;i++){
            if(!a[i]) cout<<"0"<<" ";
        }
        cout<<endl;
    }
}