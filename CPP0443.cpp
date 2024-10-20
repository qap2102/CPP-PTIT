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
        map<int,int> a;
        int x;
        for(int i=0;i<n-1;i++){
            cin>>x;
            a[x]++;
        }
        for(int i=1;i<=n+1;i++){
            if(a[i]==0){
                cout<<i<<endl;
                break;
            }
        }
    }
}