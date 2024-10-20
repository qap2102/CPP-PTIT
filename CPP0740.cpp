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
        ll a[n];
        ll minn=INT16_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            ll k=1;
            for(int j=i;j<n;j++){
                k*=a[j];
                if(k>minn) minn=k;
            }
        }
        cout<<minn<<endl;
    }
}