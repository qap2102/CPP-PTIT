#include<bits/stdc++.h>
using namespace std;
int n;
bool nt(int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return true;
}
int main(){
    cin >> n;
    cout << (nt(n)?"YES":"NO");
}