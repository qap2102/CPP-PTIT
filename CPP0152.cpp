#include<bits/stdc++.h>
using namespace std;
#define ll long long
int res(int a,int m){
    for(int i=1;i<=m-1;i++)
        if (a*i%m==1) return i;
    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,m;
        cin >> a >> m;
        cout << res(a,m) << "\n";
    }
}