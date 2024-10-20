#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int MOD=1e9+7;
ll mu(ll a, ll b){
    if(b==1) return a; // khi b=1 thì a^b =a
    if(b&1) return (a*mu(a,b-1))%MOD; // khi số mũ b lẻ : a*(a^(b-1))=a^b đệ quy dần dần thành a%MOD * a%MOD * a%MOD .....
    else return (mu(a,b/2)*mu(a,b/2))%MOD; // khi số mũ b chẵn: (a^(b/2)*a^(b/2)) = a^b đệ quy dần dần thành a%MOD * a%MOD  .....
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        ll h=1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            h=(h*a[i])%MOD;
        }
        ll g=a[0];
        for(int i=1;i<n;i++){
            g=__gcd(g,a[i]);
        }
        cout<<mu(h,g)<<endl;
    }
} // kí hiệu b&1 tương đươnng b%2==1 kiểm tra số nguyên lẻ theo nguyên lí dịch bit trong kĩ thuật số