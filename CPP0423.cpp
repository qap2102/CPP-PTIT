#include <bits/stdc++.h>
#include<math.h>
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
        int n,k;
        cin>>n>>k;
        int cnt=0;
        int dem=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=k) cnt++;
        }
        for(int i=0;i<cnt;i++){
            if(a[i]>k) dem++;
        }
        int cmp=dem;
        for(int i=0,j=cnt;j<n;i++,j++){
            if(a[i]>k) dem--;
            if(a[j]>k) dem++;
            cmp=min(cmp,dem);
        }
        cout<<cmp<<endl;
    }
}