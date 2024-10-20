#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
int a[N];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<=n-1;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int ans=0;
        int cnt=1;
        for(int i=0;i<=n-2;i++){
            if(a[i]==a[i+1]) cnt++;
            else{
                if(cnt>1) ans+=cnt;
                cnt=1;
            }
        }
        if (cnt>1) ans+=cnt;
        cout << ans << endl;
    }
}