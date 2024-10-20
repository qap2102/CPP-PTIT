#include <bits/stdc++.h>
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
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        int cnt=0;
        int b[2];
        b[0]=b[1]=0;
        string a;
        while(ss>>a){
            cnt++;
            b[(a.back()-'0')&1]++;
        }
        cout << ((cnt%2==1&&b[1]>b[0])||(cnt%2==0&&b[0]>b[1])?"YES":"NO") << "\n";
    }
}