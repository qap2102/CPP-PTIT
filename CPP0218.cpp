#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e5+5;
int a[N];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int kc=a[1]-a[0];
        for(int i=1;i<=n-2;i++){
            kc=__gcd(kc,a[i+1]-a[i]);
        }
        int cnt=0;
        for(int i=1;i*i<=kc;i++){
            if(kc%i==0){
                cnt++;
                if(i!=kc/i) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}