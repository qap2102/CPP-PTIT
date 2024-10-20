#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool res(int n){
    int cnt;
    int ans=0;
    for(int i=2;i*i<=n;i++){
        cnt=0;
        while(n%i==0){
            cnt++;
            if(cnt>1) return false;
            n/=i;
        }
        if(cnt==1) ans++;
        if(ans>3) return false;
    }
    if(n>1) ans++;
    return (ans==3);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<res(n)<<endl;
    }
}
