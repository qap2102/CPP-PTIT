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
        int a[n], s=0;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]-a[i-1]>1) s+=a[i]-a[i-1]-1;
        }
        cout<<s<<endl;
    }
}