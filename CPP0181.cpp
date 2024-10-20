#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,x,y;
        cin>>a>>x>>y;
        b=__gcd(x,y);
        while(b--){
            cout<<a;
        }
        cout<<"\n";
    }
}