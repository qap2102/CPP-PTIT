#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
struct Dinh {
    double x,y;
};
double check(Dinh a, Dinh b, Dinh c){
    return abs((b.x-a.x)*(c.y-a.y)-(c.x-a.x)*(b.y-a.y))/2;
}
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Dinh a[n];
        for(int i=0;i<n;++i){
            cin>>a[i].x>>a[i].y;
        }
        double cnt=0;
        for(int i=1;i<=n-2;++i){
            cnt+=check(a[0],a[i],a[i+1]);
        }
        printf("%.3lf\n",cnt);
    }
}

