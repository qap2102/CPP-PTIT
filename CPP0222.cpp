#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int N=1e5+5;
int a[N];
bool b[N];
int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++){
            memset(b,false,sizeof(b));
            for(int j=1;j<=n;j++){
                cin>>x;
                if(!b[x]){
                    a[x]++;
                    b[x]=true;
                }
            }
        }
        int cnt=0;
        for(int i=1;i<=1e5;i++){
            cnt+=(a[i]==n);
        }
        cout<<cnt<<endl;
    }
}