#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1005;
int a[2];
int main(){
    faster;
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        a[0]=a[1]=0;
        for(int j=1;j<=3;j++){
            int m;
            cin>>m;
            a[m]++;
        }
        ans+=(a[1]>a[0]);
    }
    cout<<ans<<endl;
}