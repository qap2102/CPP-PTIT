#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
bool prime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int gcd(int a, int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int cnt=0;
        for(int i=1;i<=x;i++){
            if(gcd(i,x)==1){
                cnt++;
            }
        }
        if(prime(cnt)) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}
// liên quan đến nguyên tố cùng nhau thì áp dụng phi hàm euler