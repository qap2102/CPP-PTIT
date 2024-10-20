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
        int n;
        cin>>n;
        int cnt=0;
        while(n--){
            ll a;
            cin>>a;
            if(a) cout<<a<<" ";
            else cnt++;
        }
        for(int i=1;i<=cnt;i++){
            cout<<"0 ";
        }
        cout<<endl;
    }
}