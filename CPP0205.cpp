#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxx=INT16_MIN;
        while(n--){
            int a;
            cin>>a;
            maxx=max(maxx,a);
        }
        cout<<maxx<<endl;
    }
}