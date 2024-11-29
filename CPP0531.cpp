#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct Point {
    ll x, y,z;
};
bool check(Point A, Point B, Point C, Point D){
    ll a1=B.x-A.x;
    ll a2=C.x-A.x;
    ll a3=D.x-A.x;
    ll b1=B.y-A.y;
    ll b2=C.y-A.y;
    ll b3=D.y-A.y;
    ll c1=B.z-A.z;
    ll c2=C.z-A.z;
    ll c3=D.z-A.z;
    ll kc=a1*b2*c3+a2*b3*c1+a3*b1*c2-a1*b3*c2-a2*b1*c3-a3*b2*c1;
    return kc==0;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        Point A, B, C, D;
        cin>>A.x>>A.y>>A.z>>B.x>>B.y>>B.z>>C.x>>C.y>>C.z>>D.x>>D.y>>D.z;
        if(check(A,B,C,D)){
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;
    }   
}