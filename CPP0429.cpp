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
    int n,k,b;
    cin>>n>>k>>b;
    int a[n+1]={0};
    for(int i=1;i<=b;++i){
        int x;
        cin>>x;
        a[x]=1; // den o vi tri x bi hong

    }
    int cnt=0;
    for(int i=1;i<=k;++i){
        if(a[i]==1) ++cnt; // dem so bong den bi hong
    }
    int ans=cnt; // gan bien ans de luu cnt
    for(int i=k+1;i<=n;++i){
        cnt=cnt-a[i-k]+a[i];
        ans=min(ans,cnt);
    }
    cout<<ans<<endl; // ans la so bong den bi hong 
    // k - ans la so bong den hoat dong 

}