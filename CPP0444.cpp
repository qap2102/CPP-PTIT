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
        int n,k,x,p;
        cin>>n>>k;
        for(int i=0;i<=n-1;i++){
            cin>>x;
            if(x==k) p=i+1;
        }
        cout<<p<<endl;
    }
}