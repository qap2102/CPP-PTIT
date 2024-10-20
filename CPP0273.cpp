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
        int cnt=0,dem=0,check=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            cnt+=a[i];
        }
        for(int i=0;i<n;i++){
            if(dem*2==cnt-a[i]){
                check=i+1;
                break;
            }
            dem+=a[i];
        }
        cout<<dem<<endl;
    }
}