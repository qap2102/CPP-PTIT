#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
bool nt(int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return true;
}
int sum(int n){
    int cnt=0;
    while(n){
        cnt+=n%10;
        n/=10;
    }
    return cnt;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(nt(n)) cout<<"NO";
        else {
            int check=sum(n);
            int kt=0;
            for(int i=2;i<sqrt(n);i++){
                while(n%i==0){
                    kt+=sum(i);
                    n/=i;
                }
            }
            if(n>1) kt+=sum(n);
            cout<<(check==kt?"YES":"NO");
        }
        cout<<endl;
    }
}