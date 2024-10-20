#include <bits/stdc++.h>
#include<math.h>
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
        int n,m;
        cin>>n>>m;
        ll tmp, maxx=-1e8,minn=1e8;
        for(int i=0;i<n;i++){
            cin>>tmp;
            if(maxx<tmp) maxx=tmp;
        }
        for(int i=0;i<m;i++){
            cin>>tmp;
            if(minn>tmp) minn=tmp;
        }
        cout<<minn*maxx<<endl;
    }
}
