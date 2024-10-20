#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define fill(a,b) memset(a,b,sizeof(a))
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt;
        for(int i=2;i<=sqrt(n);i++){
            cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            if (cnt) cout << i << " " << cnt << " ";
        }
        if (n>1) cout << n << " 1";
        cout << "\n";
    }
}