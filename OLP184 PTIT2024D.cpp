#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const long double epsilon = 1e-9;
int main(){
    faster;
    long double X,Y,r;
    cin>>X>>Y>>r;
    ll cnt=0;
    ll Xmin=X-r;
    ll Xmax=X+r;
    for(ll x=Xmin;x<=Xmax;x++){
        long double distX = fabs(x - X);
        if ((distX - r) <= epsilon){
            long double distY = sqrt(r * r - distX * distX);
            long long yMin = Y - distY;
            long long yMax = Y + distY;
            while (yMin <= Y + distY && !((x - X) * (x - X) + (yMin - Y) * (yMin - Y) - r * r <= epsilon)){
                ++yMin;
            }
            while (yMax >= Y - distY && !((x - X) * (x - X) + (yMax - Y) * (yMax - Y) - r * r <= epsilon)){
                --yMax;
            }
            cnt += (yMax - yMin + 1);
        }
    }
    cout<<cnt<<endl;
    return 0;
}