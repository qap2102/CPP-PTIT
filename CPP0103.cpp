#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    int n;
    cin>>n;
    double s=0;
    for(int i=1;i<=n;i++){
        s+=(double)1/i;
    }
    cout << setprecision(4) << fixed << s;
}