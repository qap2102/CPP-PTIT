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
        int n,k;
        cin>>n>>k;
        int x;
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==k) cnt++;
        }
        if(cnt==0) cout<<-1<<endl;
        else cout<<cnt<<endl;
    }
}