#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1005;
int a[N*2];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        n+=k; 
        for(int i=0;i<=n-1;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<=n-1;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}