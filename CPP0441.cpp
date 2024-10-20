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
        int check=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==k&&check==0) check=i+1;
        }
        if(check==0) cout<<-1<<endl;
        else cout<<check<<endl;
    }
}