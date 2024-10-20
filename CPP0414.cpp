#include <bits/stdc++.h>
#include<math.h>
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
    while(t--){
        int n;
        cin>>n;
        bool a[10];
        memset(a,false,sizeof(a));
        while(n--){
            int b;
            cin>>b;
            while(b){
                a[b%10]=true;
                b/=10;
            }
        }
        for(int i=0;i<=9;i++){
            if(a[i]) cout<<i<<" ";
        }
        cout<<endl;
    }
}