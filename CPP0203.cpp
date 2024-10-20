#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e6+5;
bool a[N];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(a,false,sizeof(a));
        int maxx=INT16_MIN;
        while(n--){
            int m;
            cin>>m;
            if(m>0) a[m]=true;
            maxx=max(maxx,m);
        }
        for(int i=1;i<=maxx+1;i++){
            if(!a[i]){
                cout << i << endl;
                break;
            }
        }
    }
}