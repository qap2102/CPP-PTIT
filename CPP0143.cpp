#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100];
int main(){
    int t;
    cin >> t;
    a[1]=a[2]=1;
    for(int i=3;i<=92;i++) a[i]=a[i-1]+a[i-2];
    while(t--){
        int n;
        cin >> n;
        cout << a[n] << "\n";
    }
}