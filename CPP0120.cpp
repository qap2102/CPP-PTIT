#include<bits/stdc++.h>
using namespace std;
#define ll long long
int res(int m, int n, int a){
    int x=m/a;
    if(m%a) x++;
    int y=n/a;
    return y-x+1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m, n, a, b;
        cin>>m>>n>>a>>b;
        int c=a*b/__gcd(a,b); // bội chung nhỏ nhất
        cout << res(m,n,a)+res(m,n,b)-res(m,n,c) << "\n";
    }
}