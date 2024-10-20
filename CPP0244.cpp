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
    int n;
    cin>>n;
    int a[1005]={}, x;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=1000;i++){
        if(a[i]>0) cout<<i<<" ";
    }
}