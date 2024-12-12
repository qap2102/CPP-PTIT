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
        int l=0,r=n-1;
        int cnt=0;
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        while(l<=r){
            if(a[l]==a[r]){
                l++;
                r--;
            }
            else if(a[l]<a[r]){
                l++;
                a[l]+=a[l-1];
                cnt++;
            }
            else{
                r--;
                a[r]+=a[r+1];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
