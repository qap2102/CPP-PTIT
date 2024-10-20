#include<bits/stdc++.h>
using namespace std;

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ll long long

const int N=105;
int t;
ll n,a[N];
 
bool check(ll n){
    foru(i,0,92)
        if (a[i]==n) return true;
    return false;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    a[0]=0;
    a[1]=1;
    foru(i,2,92) a[i]=a[i-1]+a[i-2];
    while(t--){
        cin >> n;
        while(n--){
            ll b;
            cin>>b;
            if(check(b)) cout<<b<<" ";
        }
        cout<<"\n";
    }
}