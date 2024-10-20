#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
vector<int> a;
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        a.clear();
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                a.push_back(i);
                n/=i;
            }
        }
        if (n>1) a.push_back(n);
        cout << (k>a.size()?-1:a[k-1]) << "\n";
    }
}