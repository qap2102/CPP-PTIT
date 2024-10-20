#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
bool res(int n){
    string s=to_string(n);
    int a[2]={0};
    for(char x:s) a[(x-'0')&1]++;
    return a[0]==s.size()/2;
}
int main(){
    faster;
    int n;
    cin>>n;
    if(n%2==0){
        int a=1;
        int b=1;
        for(int i=1;i<=n;i++){
            a*=10;
            b*=10;
        }
        a/=10;
        b--;
        int cnt=0;
        for(int i=a;i<=b;i++){
            if(res(i)){
                cout<<i<<" ";
                cnt++;
                if(cnt%10==0){
                    cout<<endl;
                    cnt=0;
                }
            }
        }
    }
}