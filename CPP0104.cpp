#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll s=0;
    for(int i=1;i<=n;i++){
        ll p=1;
        for(int j=1;j<=i;j++){
            p*=j;
        }
        s+=p;
    }
    cout<<s<<endl;
}