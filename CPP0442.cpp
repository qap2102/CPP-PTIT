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
        int check=-1;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==k) check=1;
        }
        cout<<check<<endl;
    }
}