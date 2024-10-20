#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
map<int,bool> b;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        b.clear();
        int maxx=INT16_MIN;
        while(n--){
            int a;
            cin>>a;
            maxx=max(maxx,a);
            b[a]=true;
        }
        int kt=0;
        for(int i=1;i<=maxx;i++){
            if(b[i]&&b[i+x]){
                kt=1;
                break;
            }
        }
        cout<<(kt?1:-1)<<endl;
    }
}