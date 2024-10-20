#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1005;
int b[N];
map<int,int> a;
int main(){
    faster;
    int n;
    int cnt=0;
    while(cin>>n){
        b[cnt++]=n;
        a[n]++;
    }
    for(int i=0;i<=cnt-1;i++){
        if(a[b[i]]){
            cout<<b[i]<<" "<<a[b[i]]<<endl;
            a[b[i]]=0;
        }

    }
}