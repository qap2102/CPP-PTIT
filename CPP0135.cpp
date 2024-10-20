#include<bits/stdc++.h>
using namespace std;
int t,n;
bool nt(int n){
    if (n<2) return false;
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return false;
    return true;
}
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=2;i*i<=n;++i)
            if (nt(i)) cout << i*i << " ";
        cout << "\n";
    }
}