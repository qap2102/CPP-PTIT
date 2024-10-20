#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
set<ll> b;
int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        b.clear();
        for(int i=0;i<=n-1;i++){
            ll a;
            cin >> a;
            b.insert(a);
        }
        for(int i=0;i<=n-1;i++)
            if (b.find(i)!=b.end()) cout << i << " ";
            else cout << "-1 ";
        cout << "\n";
    }
}
